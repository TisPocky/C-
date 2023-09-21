#include <iostream>
using namespace std;
class Class2;
class Class1{
    int a;
    public:
    void setvalue(){
        cout<<"Enter value:";
        cin>>a;
    }
    friend void max(Class1,Class2);
};
class Class2{
    int b;
    public:
    void setvalue(){
        cout<<"Enter value:";
        cin>>b;
    }
    friend void max(Class1,Class2);
};
void max(Class1 c1,Class2 c2){
    if(c1.a>c2.b){
        cout<<c1.a <<"is maximum";
    }
    else{
        cout<<c2.b <<"is maximum";
    }
}
int main(){
    Class1 c1;
    Class2 c2;
    c1.setvalue();
    c2.setvalue();
    max(c1,c2);
    return 0;
}