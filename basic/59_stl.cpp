#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

// ベクトルをつかって動的に配列の長さを決める(ベクトルはクラステンプレート)
int main()
{
    int i;
    int num;
    vector<int> array;
    cout << "要素数はいくつにしますか?: ";
    cin >> num;

    for(i = 0; i < num; i++){
        int data;
        cin >> data;
        array.push_back(data);
    }

    cout << "入力した数値はこちらです\n";
    for (i = 0; i < num; i++)
    {
        cout << array[i] << ", ";
    }
    cout << "\n";

    return 0;
}