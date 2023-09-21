#include <iostream>
using namespace std;
class Alpha{
    int a;
    public:
    Alpha(){

    }
    Alpha(int a){
        this->a=a;
    }
    void showa(){
        cout<<a<<endl;
    }
};
class Beta{
    int b;
    public:
    Beta(){

    }
    Beta(int b){
        this->b=b;
    }
    void showb(){
        cout<<b<<endl;
    }
};
class Gamma:public Alpha,public Beta{
    int c;
    public:
    Gamma(){

    }
    Gamma(int a,int b,int c):Alpha(a),Beta(b){
        this->c=c;
    }
    void showg(){
        showa();
        showb();
        cout<<c<<endl;
    }
};
int main(){
    Gamma c(10,20,30);
    c.showg();
    return 0;
}