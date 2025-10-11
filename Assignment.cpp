#include<iostream>
using namespace std;

int main(){
   int a,b;
   
   cout<<"Enter the first number:";
   cin>>a;
   cout<<"Enter the second number:";
   cin>>b;
   
   
   cout<<"Value of a="<<a<<endl;
    a=a+10;
    cout<<"Value of a="<<a<<endl;
    
    cout<<"Value of b="<<b<<endl;
    b+=10;
    cout<<"Value of b="<<b<<endl;
    return 0;
}