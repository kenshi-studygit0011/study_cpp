#include <stdio.h>
#include <iostream>
using namespace std;

// protectedで継承先と継承元の範囲のみで変数等を操作する

class OldClass{
    protected:
        int num;
};

// OldClassを継承してNewClassを作る
class NewClass : public OldClass{ // 継承する時、継承元のクラス名の右側にpublicを書くことを忘れない。忘れると継承元のメンバ変数等すべてprivateになってしまう。
    public:
        void setNum(int x);
};

void NewClass::setNum(int x){
    num = x;
    cout << num << "\n";
}

int main()
{
    NewClass obj;
    obj.setNum(10);
    
    return 0;
}