#include<iostream>
using namespace std;

int main(){
   int a,b;
   
   cout<<"Enter the first number:";
   cin>>a;
   cout<<"Enter the second number:";
   cin>>b;
   
  cout<<"Equal to =>:"<<(a==b)<<endl;
  cout<<"Not Equal to =>:"<<(a!=b)<<endl;
  cout<<"a is greater than b:"<<(a>b)<<endl;
  cout<<"a is less than b:"<<(a<b)<<endl;
  cout<<"a is greater than or equal:"<<(a>=b)<<endl;
  cout<<"a is less than or equal:"<<(a<=b)<<endl;
    return 0;
}