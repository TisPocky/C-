#include <iostream>
using namespace std;
class TollBooth{
    int n,m,r;
    static int count;
    public:
    TollBooth(){
        n=0;
        m=0;
        r=0;
    }
    void PayCar(){
        n=n+1;
        count++;
        r=r+5;
    }
    void NoPayCar(){
        m=m+1;
        count++;
        r=r;
    }
    void display(){
        cout<<"Paying Car:"<<n<<endl<<"Non-Paying Car:"<<m<<endl<<"Total Money:"<<r<<endl<<"Total No. of Cars:"<<count<<endl;
    }
};
int TollBooth::count=0;
int main(){
    TollBooth t;
    int choice;
    label:
    cout<<"Menu\n1.Paying Car\n2.Non-Paying Car\n3.Display\n4.Close"<<endl;
    cout<<"Enter choice:";
    cin>>choice;
    switch(choice){
            case 1:
                t.PayCar();
                goto label;
                break;
            case 2:
                t.NoPayCar();
                goto label;
                break;
            case 3:
                t.display();
                goto label;
                break;
            default:
                exit(0);
        }
    return 0;
}