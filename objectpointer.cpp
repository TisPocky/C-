#include <iostream>
using namespace std;
class One{
    int a;
    public:
    One(){}
    One(int a){
        this->a=a;
    }
    void display(){
        cout<<a;
    }
};
int main(){
    One o(10),*o1;
    o1=&o;
    o1->display();
    return 0;
}