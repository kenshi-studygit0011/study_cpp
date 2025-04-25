
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

// クラスの基本: 学生の情報を格納するクラスを作成し、その情報を表示するプログラムを作成してください。

class Student{
    public:
        string name;
        int age;
        int num;
        void show();
};

void Student::show(){
    cout << "名前: " << name << "\n";
    cout << "年齢: " << age << "\n";
    cout << "番号: " << num << "\n";
}

int main(){
    Student jun;
    jun.name = "jun";
    jun.age = 10;
    jun.num = 4;
    jun.show();
    return 0;
}
