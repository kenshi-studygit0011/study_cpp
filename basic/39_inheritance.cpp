#include <stdio.h>
#include <iostream>
using namespace std;

// 継承元のコンストラクタを使用する

class OldClass{
    public:
        OldClass(); // コンストラクタ
        OldClass(int x); // コンストラクタ
};

OldClass::OldClass(){
    cout << "引数がない基本クラスのコンストラクタ\n";
}
OldClass::OldClass(int x){
    cout << "引数がある基本クラスのコンストラクタ\n";
}

// OldClassを継承してNewClassを作る
class NewClass : public OldClass{
    public:
        NewClass();
};

NewClass::NewClass() : OldClass(10){
    cout << "派生クラスのコンストラクタ\n";
}

int main()
{
    NewClass obj;
    
    return 0;
}