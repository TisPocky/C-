#include <iostream>
using namespace std;
template <typename T>
void add(T a,T b){
    T sum=a+b;
    cout<<sum<<endl;
}
int main(){
    int a=10,b=10;
    float c=20.1,d=20.2;
    add(a,b);
    add(c,d);
    add<float>(10.1,10.1);
    return 0;
}