
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

// コンストラクタとデストラクタ: 学生の情報を初期化するコンストラクタと、終了時にメッセージを表示するデストラクタを持つクラスを作成してください。

class Student{
    private:
        string name;
        int age;
        int num;

    public:
        // コンストラクタ
        Student(string studentName, int studentAge, int studentNumber){
            name = studentName;
            age = studentAge;
            num = studentNumber;
            cout << "コンストラクタが呼ばれました: " << name << "\n";
        }

        // デストラクタ
        ~Student(){
            cout << "デストラクタが呼ばれました: " << name << "\n";
        }

        // 情報を表示するメンバ関数
        void displayInfo() const{
            cout << "名前: " << name << "\n";
            cout << "年齢: " << age << "\n";
            cout << "学籍番号: " << num << "\n";
            cout << "^^^^^^^^^^^^^^^^^^^^^\n";
        }

};

int main(){
    // 情報を設定
    Student s1("yamada", 18, 12);
    Student s2("ito", 19, 30);

    // 情報の表示
    s1.displayInfo();
    s2.displayInfo();


    return 0;
}
