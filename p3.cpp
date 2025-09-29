//write a program to check given number is prime or not

#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter your number:";
    cin>>num;

    if(num%2==0){
        cout<<"The number is Prime";
    }
    else{
        cout<<"The number is not prime";
    }
    return 0;
}
