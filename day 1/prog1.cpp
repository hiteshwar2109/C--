using namespace std;
#include <iostream>
int main() {
    cout<<"Welcome to the first program in c++ "<<"\n" ;
    int x=5;
    char y='a';
    bool t=true; 
    float f=35.15;
    cout<<x<<"\n"<<y<<endl<<t<<endl<<f;
    int a=10;
    if(a>0){
        cout<<" Yeah it is postive";
    }
    else{
        cout<<"Its negative";
    }
    int a1=10;//== is for comparison = is for assignment i.e., assingning values
    int a2=15;
    cout<<a1+a2;
    if(a1%2==0){
        cout<<"it is even";
    }
    else{
        cout<<"it is odd";
    }
    return 0;
}