#include <iostream>
using namespace std;
class Distance{
    int feet,inch;
    public:
    Distance(){}
    Distance(int a,int b){
        feet=a;
        inch=b;
    }
    void operator=(float conv){
        float totalinches = conv * 39.3701;
        float totalfeet = totalinches / 12;
        feet = int(totalfeet);
        inch = int((totalfeet-feet) * 12);
        cout<<"Coversion:"<<feet<<"."<<inch;
    }
};
int main(){
    int conv=1;
    Distance d;
    d=conv;
    return 0;
}