
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

// クラスのメンバ関数: 学生の情報を管理するクラスを作成し、メンバ関数を使用して情報を設定し表示するプログラムを作成してください。

class Student{
    private:
        string name;
        int age;
        int num;

    public:
        // 情報を設定するメンバ関数
        void setInfo(string studentName, int studentAge, int studentNumber){
            name = studentName;
            age = studentAge;
            num = studentNumber;
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
    // Student クラスのインスタンスを作成
    Student s1, s2;

    // 情報を設定
    s1.setInfo("yamada", 18, 12);
    s2.setInfo("ito", 19, 30);

    // 情報の表示
    cout << "学生1の情報: \n";
    s1.displayInfo();

    // 情報の表示
    cout << "学生2の情報: \n";
    s2.displayInfo();


    return 0;
}
