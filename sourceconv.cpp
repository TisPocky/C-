#include <iostream>
#include <cmath>
using namespace std;
class Rectangle{
    float x,y;
    public:
    Rectangle(){}
    Rectangle(float a,float b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"X-coordinate:"<<x<<endl<<"Y-coordinate:"<<y;
    }
};
class Polar{
    float angle,radius;
    public:
    Polar(){}
    Polar(float a,float b){
        angle=a;
        radius=b;
    }
    operator Rectangle(){
        double x,y;
        float radian=angle*M_PI/180;
        x=radius*cos(radian);
        y=radius*sin(radian);
        Rectangle robj(x,y);
        return robj;
    }
};
int main(){
    Rectangle r;
    Polar p(10,20);
    r=p;
    r.display();
    return 0;
}