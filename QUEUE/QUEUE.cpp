#include<bits/stdc++.h>
using namespace std;

/*Queue operration:(LIFO)
1. enqeue()
2. dequeue()
3. peek()
4. empty()
*/
int n=100;
class Queue{
    int* arr;
    int front;
    int back;
    public:
    Queue(){
        arr =new int[n];
        front=-1;
        back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue Overflow";
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
        return;
    }
    void pop(){
        if(front==-1 || front>back){
            cout<<"No element in the Queue";
            return;
        }
        front++;
        return;
    }
    int peek(){
        if(front==-1 || front>back){
            cout<<"No element in the Queue";
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        return (front==-1 ||front>back);
    }
};
int main(){
    Queue qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    cout<<qu.peek()<<"\n";
    qu.pop();
    cout<<qu.peek()<<"\n";
    cout<<qu.empty();


}