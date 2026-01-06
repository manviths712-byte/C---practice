#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,4,78,31};
    int n=6;
    
    int max=arr[0];
    int min=arr[0];
    
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Maximum="<<max<<endl;
    cout<<"Minimum="<<min<<endl;
    return 0;
}