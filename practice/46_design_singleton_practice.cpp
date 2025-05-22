#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// シングルトンでログ管理システムの設計
class Logger {
    private:
    // ofstreamは"output file stream"(出力用ファイルストリーム)を意味し、C++標準ライブラリに定義されている。ファイルにデータを書き込むために使用する。
        ofstream logfile;
        Logger(){
            logfile.open("log.txt", ios::app); // 追記モードで開く
        }

    public:
    // 「&」は参照渡しのため、使用している。Logger型の参照をreturn instanceで返している。
        static Logger& getInstance(){
            static Logger instance;
            return instance;
        }

        void log(const string& message){
            logfile << "[LOG]" << message << "\n";
        }

        // ~はデストラクタを表す。Loggerクラスのデストラクタで、オブジェクトが破棄される時に呼ばれる。
        ~Logger(){
            logfile.close();
        }

        // コピー禁止
        Logger(const Logger&) = delete;
        Logger& operator=(const Logger&) = delete;

};

int main(){
    Logger& logger = Logger::getInstance(); // オブジェクトの生成
    logger.log("アプリケーションを開始しました。"); // オブジェクトが持つクラスのメソッドを実行。（引数に書き込みたいメッセージを付けて作成）
    logger.log("何らかの処理を行いました。");
}