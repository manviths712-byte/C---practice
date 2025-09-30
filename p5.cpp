#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter the user number:";
    cin>>num;

    for(int i=1;i<=10;i++){
        cout<<i<<" "<<i*num<<endl;
    }
    return 0;
}