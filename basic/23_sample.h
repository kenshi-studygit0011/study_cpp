#include <iostream>
using namespace std;

class Student{
    public:
        int num;
        void show();
};

void Student::show(){
    cout << "番号: " << num << "\n";
};