#include <stdio.h>
#include <iostream>
using namespace std;

class NewClass{
    public:
        int num;
        NewClass operator+(NewClass x);
};

NewClass NewClass::operator+(NewClass x){
    NewClass tmp;
    tmp.num = num + x.num;
    return tmp;
}

int main()
{
    NewClass obj1, obj2, result;
    obj1.num = 10;
    obj2.num = 20;
    result = obj1.operator+(obj2);
    cout << result.num << "\n";
    return 0;
}