#include <iostream>
#include <string.h>
using namespace std;
class Mountain{
    char name[50],location[50];
    int height;
    public:
    Mountain(){}
    Mountain(char a[],char b[],int c){
        strcpy(name,a);
        strcpy(location,b);
        height=c;
    }
    friend void cmpheight(Mountain,Mountain);
};
void cmpheight(Mountain m1,Mountain m2){
    if (m1.height>m2.height){
        cout<<"Name of mountain: "<<m1.name<<endl<<"Location: "<<m1.location<<endl<<"Height: "<<m1.height<<" m"<<endl;
    }
    else{
        cout<<"Name of mountain: "<<m2.name<<endl<<"Location: "<<m2.location<<endl<<"Height: "<<m2.height<<" m"<<endl;
    }
}
int main(){
    Mountain m1("Sagarmatha","Nepal",8848);
    Mountain m2("Mt.Fuji","Japan",1234);
    cmpheight(m1,m2);
    return 0;
}