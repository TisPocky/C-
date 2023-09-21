#include <iostream>
using namespace std;
class One{
    int img,real;
    public:
    One(){}
    One(int a,int b){
        img=a;
        real=b;
    }
    friend void Complex(One,One);
};
void Complex(One o,One o1){
    One temp;
    temp.img=o1.img+o.img;
    temp.real=o1.real+o.real;
    cout<<"img:"<<temp.img<<endl<<"real:"<<temp.real;
}
int main(){
    One o(10,20),o1(10,20);
    Complex(o,o1);
    return 0;
}