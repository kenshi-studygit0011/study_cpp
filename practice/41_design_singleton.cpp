#include <iostream>
using namespace std;

// シングルトンはアプリケーション全体でただ一つだけのインスタンスが必要な場合に使用する。
class Singleton{
    private:
        static Singleton* instance;
        Singleton() {} // privateコンストラクタ

    public:
        static Singleton* getInstance(){
            if(!instance)
                instance = new Singleton();
            return instance;
        }

        void show(){
            cout << "Singleton instance\n";
        }
};

Singleton* Singleton::instance = nullptr; // nullptr(未生成)なら、new Singleton()でインスタンスを生成。作成済みならそのインスタンスを返す。

int main(){
    Singleton* obj = Singleton::getInstance(); // インスタンスをポインタとして返す
    obj -> show();
    return 0;
}