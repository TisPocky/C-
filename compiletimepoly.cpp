#include <iostream>
using namespace std;
class One{
    int a;
    public:
    One (){

    }
    One(int a){
        this->a=a;
    }
    void operator++(){
        a=++a;
    }
    void display(){
        cout<<a;
    }
};
int main(){
    One o(10);
    ++o;
    o.display();
    return 0;
}