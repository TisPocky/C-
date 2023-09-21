#include <iostream>
using namespace std;
int main(){
    int* ptr=new int(10);
    int* ptr1=new int(10);
    int sum=*ptr+*ptr1;
    cout<<"Sum:"<<sum;
    delete ptr;
    delete ptr1;
    ptr=NULL;
    ptr1=NULL;
    return 0;
}