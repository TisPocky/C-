#include <iostream>
using namespace std;
template <typename T,typename T1>
class One{
    T l;
    T b;
    T1 h;
    T1 volume;
    public:
    One(){}
    One(T a, T b, T1 c){
        l=a;
        this->b=b;
        h=c;
    }
    void calc(){
        volume=l*b*h;
        cout<<"Volume:"<<volume;
    }
};
int main(){
    One <int,float> o(2,2,2.1);
    o.calc();
    return 0;
}
