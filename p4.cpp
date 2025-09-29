#include<iostream>
using namespace std;

int main(){
    int n, count=0, sum=0;

    cout<<"Enter the number of n:";
    cin>>n;

    while(n!=0){
        int temp=n%10;
        sum += temp;
        count++;
        n=n/10;
    }

    cout<<"Enter the sum of digits="<<sum<<endl;
    cout<<"Enter the count of digits="<<count<<endl;

    return 0;
}