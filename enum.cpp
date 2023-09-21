#include <iostream>
using namespace std;
enum Day{
    Sunday,Monday=3,Tuesday,Wednesday=2,Thursday,Friday,Saturday=0
};
int main(){
    Day d1,d2,d3;
    d1=Sunday;
    d2=Thursday;
    d3=Saturday;
    cout<<d1<<endl<<d2<<endl<<d3;
    return 0;
}