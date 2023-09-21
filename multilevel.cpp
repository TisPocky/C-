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
class Roll:public Person{
    int roll;
    public:
    void set(){
        cout<<"Enter roll:";
        cin>>roll;
    }
    void display(){
        cout<<"Roll No. :"<<roll<<endl;
    }
};
class Student:public Roll{
    public:
    void set(){
        Person::set();
        Roll::set();
    }
    void display(){
        Person::display();
        Roll::display();
    }
};
int main(){
    Student s;
    s.set();
    s.display();
    return 0;
}
