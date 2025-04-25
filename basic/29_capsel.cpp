#include <stdio.h>
#include <iostream>
using namespace std;

// getter,setterを使用してみる
class Student{
    private:
        int num;
    public:
        void setNum(int x);
        int getNum();
};

void Student::setNum(int x){
    num = x;
    // cout << num << "\n";
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