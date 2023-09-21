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
   One operator+(One o){
    One temp;
    temp.img=img+o.img;
    temp.real=real+o.real;
    cout<<"img:"<<temp.img<<endl<<"real:"<<temp.real;
}
};
int main(){
    One* o=new One(10,20);
    One* o1=new One(11,20);
    *o+*o1;
    delete o;
    delete o1;
    return 0;
}