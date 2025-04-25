#include <stdio.h>
#include <iostream>
using namespace std;

// コンストラクタを使用してみる
class NewClass{
    public:
        int num;
        NewClass();
        NewClass(int x);
};

NewClass::NewClass(){
    cout << "番号が入力されていません\n";
}

NewClass::NewClass(int x){
    num = x;
    cout << "番号: " << num << "\n";
}


int main()
{
    NewClass obj;
    NewClass obj2(100);
    return 0;
}