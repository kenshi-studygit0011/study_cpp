#include <stdio.h>
#include <iostream>
using namespace std;

void nibai(int x){
    cout << x * 2 << "\n";
}

void nibai(double y){
    cout << y * 2 << "\n";
}

int main()
{
    nibai(3.14);

    
    return 0;
}