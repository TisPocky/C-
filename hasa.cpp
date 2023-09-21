#include <iostream>
using namespace std;
class Engine{
    public:
    void display(){
        cout<<"Engine has started"<<endl;
    }
};
class Car{
    Engine e;
    public:
    void display(){
        e.display();
        cout<<"Car has started";
    }
};
int main(){
    Car c;
    c.display();
    return 0;
}