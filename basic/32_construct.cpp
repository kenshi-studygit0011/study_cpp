#include <stdio.h>
#include <iostream>
using namespace std;

// コンストラクタを使用してみる
class NewClass{
    public:
        int num;
        NewClass(int x);
};

NewClass::NewClass(int x){
    num = x;
}


int main()
{
    NewClass obj(100);
    cout << obj.num << "\n";
    return 0;
}