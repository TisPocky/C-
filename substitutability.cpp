#include <iostream>
using namespace std;
class One{
    public:
    void message(){
        cout<<"Hello";
    }
};
class Two:public One{
    public:
    void message(){
        cout<<"Ola";
    }
};
void func(One o){
    o.message();
}
void func2(){
    Two t;
    func(t);
}
int main(){
    func2();
    return 0;
}