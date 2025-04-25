#include <stdio.h>
#include <iostream>
using namespace std;

// デストラクタを使用してみる

class NewClass{
    public:
        int num;
        NewClass();
        ~NewClass();
};

NewClass::NewClass(){
    cout << "コンストラクタです\n";
}

// オブジェクトが破棄されるタイミングで実行される
NewClass::~NewClass(){
    cout << "デストラクタです\n";
}


int main()
{
    NewClass obj;
    
    return 0;
}