#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
/* Stack operations : O(1)
1. push()
2.Pop()
3.top()
4.empty()
*/
int  n=100;
class Stack
{
    int * arr;
    int top;
    public:
    
    Stack(){
        arr =new int[n];
        top=-1;
    }

    void push(int x){
        if( top==n-1){
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top]=x;
    }
    
    int pop(){
        if(top==-1){
            cout<<"Stack underflow";
            return -1;
        }
        top--;
        return arr[top+1];
    }

    int Top(){
        if(top==-1){
            cout<<"no element in stack";
            return -1;
        }
        return arr[top];
    }
    
    bool empty()
    {
        return top==-1;
    }
};
int main(){
Stack st;
st.push(1);
st.push(2);
st.push(3);
cout<<"\n";
cout<<st.Top();
cout<<"\n";
cout<<st.pop();
cout<<st.pop();
cout<<"\n";
cout<<st.empty();

return 0;
}