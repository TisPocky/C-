#include <iostream>
using namespace std;
class Test{
    public:
    Test(){
        cout<<"Constructor called"<<endl;
    }
    ~Test(){
        cout<<"Destructor called";
    }
};
int main(){
    Test t;
    return 0;
}