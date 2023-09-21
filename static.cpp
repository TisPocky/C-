#include <iostream>
using namespace std;
class One{
    int a;
    static int count;
    public:
    void set(){
        cout<<"Enter value:";
        cin>>a;
        count++;
    }
    void display(){
        cout<<a<<endl;
    }
    static void displaycount(){
        cout<<"Count="<<count;
    }
};
int One::count=0;
int main(){
    One o[5];
    for(int i=0;i<=3;i++){
        o[i].set();
    }
    for(int i=0;i<=3;i++){
        o[i].display();
    }
    One::displaycount();
    return 0;
}