#include <stdio.h>
#include <iostream>
using namespace std;


// 仮想関数の呼び出し
class OldClass{
    public:
        virtual void hello();
};

void OldClass::hello(){
    cout << "OldClassです\n";
}

class NewClass : public OldClass{
    public:
        void hello();
};

void NewClass::hello() {
    cout << "NewClassです\n";
}

int main()
{
    NewClass obj;
    obj.OldClass::hello();
    return 0;
}