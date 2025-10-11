#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;

    cout<<"Logical AND "<<(a>0&&b>0)<<endl;
    cout<<"Logical OR "<<(a>0||b>0)<<endl;
    cout<<"Logical NOT "<<(!a)<<endl;

    return 0;
}