#include <stdio.h>
#include <iostream>
#include "23_sample.h"
using namespace std;

// 以下、23_sample.hで定義しているため、不要
// void Student::show(){
//     cout << "番号: " << num << "\n";
// };

int main()
{
    Student Yamada;
    Yamada.num = 24;
    Yamada.show();

    return 0;
}