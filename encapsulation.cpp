#include <iostream>
using namespace std;
class One{
    private:
    int a;
    public:
    int getx(){
        return a;
    }
    void set(int a){
        this->a=a;
    }
};
int main(){
    One o;
    o.set(10);
    cout<<"Result:"<<o.getx();
    return 0;
}