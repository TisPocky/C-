#include <iostream>
#include <string.h>
using namespace std;
class Person{
    char name[50];
    int code;
    public:
    Person(){}
    Person(char n[],int a){
        strcpy(name,n);
        code=a;
    }
    void display(){
        cout<<"Name:"<<name<<endl<<"Code:"<<code<<endl;
    }
};
class Account:virtual public Person{
    int salary;
    public:
    Account(){}
    Account(char n[], int a,int b):Person(n,a){
        salary=b;
    }
    void display(){
        cout<<"Salary:"<<salary<<"$"<<endl;
    }
};
class Admin:virtual public Person{
    int no;
    public:
    Admin(){}
    Admin(char n[], int a,int c):Person(n,a){
        no=c;
    }
    void display(){
        cout<<"No. of years of experience:"<<no<<" yrs"<<endl;
    }
};
class Record:public Account, public Admin{
    int record;
    public:
    Record(){}
    Record(char n[], int a,int b,int c,int d):Account(n,a,b),Admin(n,a,c),Person(n,a){
        record=d;
    }
    void display(){
        Person::display();
        Account::display();
        Admin::display();
        cout<<"Record No.:"<< record<<endl;
    }
};
int main(){
    Record r("Prabal",211635,1000,12,3);
    r.display();
    return 0;
}

