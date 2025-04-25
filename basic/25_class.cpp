#include <stdio.h>
#include <iostream>
using namespace std;

class Student{
    public:
        int num;
        void show();
};

void Student::show(){
    cout << "番号: " << num << "\n";
}

int main()
{
    int i;
    Student array[3];
    array[0].num = 10;
    array[1].num = 20;
    array[2].num = 30;

    for(i = 0; i < 3; i++){
        array[i].show();
    }

    return 0;
}