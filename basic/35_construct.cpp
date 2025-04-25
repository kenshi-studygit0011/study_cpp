#include <stdio.h>
#include <iostream>
using namespace std;

class NewClass{
    public:
        int num;
        NewClass();
        NewClass(const NewClass &obj); // コピーコンストラクタを使用する
};

NewClass::NewClass(){
    cout << "コンストラクタです\n";
}

NewClass::NewClass(const NewClass &obj){
    cout << "コピーコンストラクタです\n";
}

int main()
{
    NewClass obj1;
    NewClass obj2 = obj1;
    
    return 0;
}