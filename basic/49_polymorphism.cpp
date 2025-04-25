#include <stdio.h>
#include <iostream>
using namespace std;


// 基本クラスのポインタ
class Student{
    public:
        int num;
};

class Tanaka : public Student{
    public:
        Tanaka(int x){
            num = x;
        };
};

class Sato : public Student{
    public:
        Sato(int y){
            num = y;
        };
};

int main()
{
    Tanaka tanaka(10);
    Tanaka sato(20);
    Student *p[2];
    p[0] = &tanaka;
    p[1] = &sato;
    int i;
    for(i = 0; i < 2; i++){
        cout << (*p[i]).num << "\n";
    }
    return 0;
}