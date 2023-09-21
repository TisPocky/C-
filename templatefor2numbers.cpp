#include <iostream>
using namespace std;
template <typename T>
T average(T a,T b){
    return((a+b)/2);
}
template <typename T>
T sum(T a, T b){
    return(a+b);
}
int main(){
    cout<<"Average:"<< average <int>(10,20)<<endl;
    cout<<"Sum:"<< sum <float>(10.1,20.1);
    return 0;
}