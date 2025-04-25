#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;

// キューの使い方
int main()
{
    queue<int> obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    cout << "キューで整列しました\n";
    while(!obj.empty()){
        cout << obj.front() << ", ";
        obj.pop();
    }

    return 0;
}