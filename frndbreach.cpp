#include <iostream>
using namespace std;
class One{
    int a=11;
    public:
    void display(){
        cout<<a;
    }
    friend void func(One& o);
};
void func(One& o){
    o.a=10;
}
int main(){
    One o;
    func(o);
    o.display();
    return 0;
}