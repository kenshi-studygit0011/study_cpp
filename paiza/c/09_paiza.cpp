#include <iostream>
#include <string>
using namespace std;

int main(){
    int N=100;

    for(int i = 1; i <= N; i++){
        if(i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz\n";
        } else if(i % 3 == 0){
            cout << "Fizz\n";
        } else if(i % 5 == 0){
            cout << "Buzz\n";
        } else {
            cout << i << "\n";
        }
    }

    return 0;
}