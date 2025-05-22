
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// スタックの実装: スタックを配列で実装し、プッシュ、ポップ、ピーク操作を行うプログラムを作成してください。

class Stack{
    // 定義をプライベートモードで定義
    private:
        static const int max = 100;
        int data[max];
        int top;

    public:
        Stack(){
            top = -1; // 初期状態は空
        }

    void push(int value){
        if(top >= max -1){
            cout << "スタックが満杯です。\n";
            return;
        }

        data[++top] = value;
        cout << "Push: " << value << endl;
    }

    void pop(){
        if(top < 0){
            cout << "スタックは空です\n";
            return;
        }
        cout << "Pop: " << data[top--] << endl;
    }

    // 先頭要素を確認（削除しない）
    void peek(){
        if(top < 0){
            cout << "スタックは空です。\n";
            return;
        }
        cout << "Peek: " << data[top] << endl;
    }

    // スタックが空か確認
    bool isEmpty(){
        return top == -1;
    }

    // スタックの内容を表示（デバッグ用）
    void display(){
        if(isEmpty()){
            cout << "スタックは空です。\n";
            return;
        }
        cout << "スタックの内容";
        for(int i = 0; i <= top; i++){
            cout << data[i] << " ";
        }
        cout << "\n";
    }

};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();
    s.pop();
    s.peek();
    s.display();

    return 0;


    
}
