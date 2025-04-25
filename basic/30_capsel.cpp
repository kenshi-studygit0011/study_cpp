#include <stdio.h>
#include <iostream>
using namespace std;

// getter,setterを使用してみる
class Student{
    private:
        int num;
    public:
        void setNum(int x); // メンバ関数
        int getNum(); // メンバ関数
};

void Student::setNum(int x){
    if(0 < x && x < 100)
        num = x;
    else
        num = 0;
}

int Student::getNum(){
    return num;
}

int main()
{
    Student Tanaka;
    Tanaka.setNum(125);
    int result = Tanaka.getNum();
    cout << result << "\n";

    return 0;
}