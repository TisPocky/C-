#include <iostream>
#include <cmath>
using namespace std;
class Polar{
    float angle,radius;
    public:
    Polar(){}
    Polar(float a,float b){
        angle=a;
        radius=b;
    }
    float getx(){
        return angle;
    }
    float gety(){
        return radius;
    }
};
class Rectangle{
    float x,y;
    public:
    Rectangle(){}
    Rectangle(float a,float b){
        x=a;
        y=b;
    }
    Rectangle(Polar p){
        float radian=p.getx()*M_PI/180;
        x=p.gety()*cos(radian);
        y=p.gety()*sin(radian);
    }
    void display(){
        cout<<"X-coordinate:"<<x<<endl<<"Y-coordinate:"<<y<<endl;
    }
};
int main(){
    Polar p(10,20);
    Rectangle r;
    r=p;
    r.display();
    return 0;
}
