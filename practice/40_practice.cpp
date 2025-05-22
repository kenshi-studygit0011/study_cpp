
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// キューの実装: キューを配列で実装し、エンキュー、デキュー操作を行うプログラムを作成してください。
class Queue{
    private:
        static const int max = 100;
        int data[max];
        int front, rear;
    
    public:
        Queue(){
            front = 0;
            rear = 0;
        }
    
    // キューに値を追加（エンキュー）
    void enqueue(int value){
        if(rear >= max){
            cout << "キューが満杯です\n";
            return;
        }
        data[rear++] = value;
        cout << "Enqueue: " << value << endl;
    }

    // キューから値を取り出す（デキュー）
    void dequeue(){
        if(isEmpty()){
            cout << "キューは空です\n";
            return;
        }
        cout << "Dequeue: " << data[front++] << endl;
    }

    // 先頭の値を確認
    void peek(){
        if(isEmpty()){
            cout << "キューは空です\n";
            return;
        }
        cout << "Peek: " << data[front] << endl;
    }

    // 空かどうか
    bool isEmpty(){
        return front == rear;
    }

    void display(){
        if(isEmpty()){
            cout << "キューは空です\n";
            return;
        }
        cout << "キューの内容: ";
        for(int i = front; i < rear; i++){
            cout << data[i] << " ";
        }
        cout << endl;
    }

};

int main(){
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.peek();
    q.dequeue();
    q.peek();
    q.display();

    return 0;

}
