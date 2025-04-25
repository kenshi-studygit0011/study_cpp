
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

// 構造体の配列: 学生の情報を複数格納する構造体の配列を作成し、全ての情報を表示するプログラムを作成してください。

struct Student{
    string name;
    int age;
    int number;
};

int main(){
    // 学生情報の配列
    Student student[3];

    // 情報の入力（初期化）
    student[0] = {"jon", 18, 12}; // 左からstructの上からに対応している
    student[1] = {"ryo", 19, 3};
    student[2] = {"jin", 18, 26};

    // 全員の情報を表示
    for(int i = 0; i < 3; i++){
        cout << "学生" << i + 1 << ":\n";
        cout << "名前: " << student[i].name << "\n";
        cout << "年齢: " << student[i].age << "\n";
        cout << "学籍番号" << student[i].number << "\n";
        cout << "----------------------\n";
    }


    return 0;
}
