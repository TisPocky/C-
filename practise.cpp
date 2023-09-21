#include <iostream>
#include <cmath>
using namespace std;
class Distance{
    int feet,inch;
    public:
    void display(){
        cout<<feet<<endl<<inch;
    }
    void operator=(float conv){
        float totalinches=conv*39.37;
        float totalfeet=totalinches/12;
        feet=(totalfeet);
        inch=(totalfeet-feet)*12;
        cout<<"Total feet:"<<totalfeet<<endl;
    }
};
int main(){
    Distance d;
    int conv=1;
    d=conv;
    d.display();
    return 0;
}