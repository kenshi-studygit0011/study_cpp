#include <stdio.h>
#include <iostream>
using namespace std;

// 継承元のコンストラクタを使用する

class OldClass{
    public:
        OldClass(); // コンストラクタ
};

OldClass::OldClass(){
    cout << "基本クラスのコンストラクタ\n";
}

// OldClassを継承してNewClassを作る
class NewClass : public OldClass{
    public:
        NewClass();
};

NewClass::NewClass(){
    cout << "派生クラスのコンストラクタ\n";
}

int main()
{
    NewClass obj;
    
    return 0;
}