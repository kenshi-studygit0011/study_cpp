#include <stdio.h>
#include <iostream>
using namespace std;


// オーバーライドを使った多態性
class Animal{
    public:
        virtual void call() = 0;
};

class Dog : public Animal{
    public:
        void call(){
            cout << "わんわん\n";
        };
};

int main()
{
    Dog obj1;
    obj1.call();
    return 0;
}