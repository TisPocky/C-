#include <iostream>
using namespace std;
template <typename T>
void Swap(T& a, T& b){
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=10,b=20;
    string c="Hello",d="World";
    cout<<a<<endl<<b<<endl;
    cout<<c<<endl<<d<<endl;
    swap(a,b);
    swap(c,d);
    cout<<a<<endl<<b<<endl;
    cout<<c<<endl<<d;
    return 0;
}