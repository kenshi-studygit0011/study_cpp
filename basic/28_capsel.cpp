#include <stdio.h>
#include <iostream>
using namespace std;

class Student{
    private:
        int num;
    public:
        void setNum(int x);
};

void Student::setNum(int x){
    num = x;
    cout << num << "\n";
}

int main()
{
    Student Tanaka;
    Tanaka.setNum(100);


    return 0;
}