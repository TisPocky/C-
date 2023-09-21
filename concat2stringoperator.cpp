#include <iostream>
#include <string.h>
using namespace std;
class One{
    char a[50];
    public:
    One(){}
    One(char a[]){
        strcpy(this->a,a);
    }
    One operator+ (One o){
        strcat(a," ");
        strcat(a,o.a);
        return a;
    }
    void display(){
        cout<<a;
    }
};
int main(){
    One o("Prabal"),o1("Piya"),o2;
    o2=o+o1;
    o2.display();
    return 0;
}