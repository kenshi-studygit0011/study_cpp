#include <stdio.h>
#include <iostream>
#include <stack>
using namespace std;

// スタックの使い方
int main()
{
    stack<int> obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    cout << "スタックで整列しました\n";
    while(!obj.empty()){
        cout << obj.top() << ", ";
        obj.pop();
    }

    return 0;
}