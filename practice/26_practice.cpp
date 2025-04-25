
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

// 構造体の基本: 学生の情報（名前、年齢、学籍番号）を格納する構造体を作成し、その情報を表示するプログラムを作成してください。

struct Student{
    char name[128];
    int age;
    int number;
};

int main(){
    struct Student kojiro;
    strcpy(kojiro.name, "kojiro");
    kojiro.age = 18;
    kojiro.number = 5;

    cout << kojiro.name << "\n";
    cout << kojiro.age << "\n";
    cout << kojiro.number << "\n";


    return 0;
}
