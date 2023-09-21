#include <iostream>
using namespace std;
int main(){
    int num,num1;
    cout<<"Enter 1st number:";
    cin>>num;
    cout<<"Enter 2nd number:";
    cin>>num1;
    try{
        if(num==0){
            throw 0;
        }
    }
    catch(int a){
        cout<<"Exception caught:"<<a<<endl;
    }
    try{
        if (num1==0){
            throw "Error";
        }
    }
    catch (const char *a){
        cout<<"Exception caught:"<<a<<endl;
    }

}
