#include <iostream>
using namespace std;
class One{
    int a,b;
    public:
    One(int a,int b){
        this->a=a;
        this->b=b;
    }
    One(One& c){
        a=c.a;
        b=c.b;
    }
    void display(){
        cout<<a<<endl<<b;
    }
};
int main(){
    One o(10,20);
    One o1(o);
    o1.display();
    return 0;
}