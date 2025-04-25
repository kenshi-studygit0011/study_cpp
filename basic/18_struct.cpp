#include <stdio.h>
#include <iostream>
using namespace std;

struct Test{
    char name[32];
    int japanese;
    int math;
    int english;
};

struct Test student[3]  = {
    {"Taro", 40, 50, 60},
    {"Jiro", 45, 55, 65},
    {"Saburo", 41, 51, 61}
};

void show(void);
void line(void);

int main()
{
    printf("%10s %10s %10s %10s \n", "名前", "国語", "算数", "英語");
    line();
    show();
    line();
    return 0;
}

void line (void){
    int i;
    for(i=0; i<50; i++){
        printf("-");
    }
    printf("\n");
}

void show(void){
    int i;
    for (i=0; i<3; i++){
        printf("%8s %8d %8d %8d\n", student[i].name, student[i].japanese, student[i].math, student[i].english);

    }
}