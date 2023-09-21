#include <iostream>
using namespace std;
class One{
    int a,b;
    public:
    One(){}
    One(int a,int b){
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<"a:"<<a<<endl<<"b:"<<b;
    }
};
int main(){
    One o(10,20);
    o.display();
    return 0;
}