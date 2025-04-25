#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    try{
        throw 1;
    }
    catch(int x){
        cout << "catch文の処理内容\n";
    }

    return 0;
}