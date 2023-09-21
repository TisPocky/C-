#include <iostream>
using namespace std;
template <typename T, int max>
class Stack
{
    T stk[max];
    int top;
    public:
    Stack(){
        top=-1;
    }
    void push(T data);
    void pop();
    void display();
};
template <typename T ,int max>
void Stack <T,max>::push(T data)
{
    if(top==max-1){
        cout<<"Stack is full no more insertion is allowed";
    }
    else{
        top++;
        stk[top]=data;
    }
}
template <typename T ,int max>
void Stack <T,max>::pop()
{
    if(top==-1){
        cout<<"The stack is empty so no data elements can be removed";
    }
    else{
        cout<<stk[top]<<"is popped out";
        top--;
    }
}
template <typename T ,int max>
void Stack <T,max>::display()
{
    for (int i=top;i>=0;i--){
        cout<<"Stack["<<i<<"]"<<"="<<stk[i]<<endl;
    }
}
int main(){
    Stack <int,10> objs1;
    int data;
    cout<<"Enter data:";
    cin>>data;
    objs1.push(data);
    objs1.pop();
    objs1.display();
    return 0;
}