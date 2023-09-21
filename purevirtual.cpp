#include <iostream>
using namespace std;
class One{
    public:
    virtual void func()=0;
};
class Two:public One{
    public:
    void func(){
        cout<<"Hello";
    }
};
int main(){
    Two t;
    t.func();
    return 0;
}