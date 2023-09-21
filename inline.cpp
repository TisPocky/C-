#include <iostream>
using namespace std;
inline int add(int a,int b){
    return(a+b);
}
int main(){
    int a=10,b=10;
    cout<<"Sum:"<<add(a,b);
    return 0;
}