#include <iostream>
using namespace std;
class Person{
    char name[50];
    public:
    void set(){
        cout<<"Enter name:";
        cin>>name;   
         }
    void display(){
        cout<<"Name:"<<name<<endl;
    }
};
class Student:public Person{
    int roll;
    public:
    void set(){
        Person::set();
        cout<<"Enter roll no:";
        cin>>roll;
      
    }
    void display(){
        Person::display();
        cout<<"Roll No.:"<<roll;
    }
};
int main(){
    Person p;
    Student s;
    s.set();
    s.display();
    return 0;
}