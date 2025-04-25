#include <stdio.h>
#include <iostream>
using namespace std;


// オーバーライドを使った多態性
class Student{
    public:
        virtual void hello();
};

void Student::hello(){
    cout << "自己紹介をどうぞ\n";
}

class Tanaka : public Student{
    public:
        void hello();
};

class Sato : public Student{
    public:
        void hello();
};

void Tanaka::hello() {
    cout << "田中です\n";
}

void Sato::hello() {
    cout << "佐藤です\n";
}

int main()
{
    Tanaka obj1;
    Sato obj2;
    obj1.hello();
    obj2.hello();
    return 0;
}