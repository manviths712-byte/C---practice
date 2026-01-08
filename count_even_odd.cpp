#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter the array elemnts:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int evenCount=0;
    int oddCount=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenCount++;
        }
         else{
            oddCount++;
        }
    }
    cout<<"Even count:"<<evenCount<<endl;
    cout<<"Odd count:"<<oddCount<<endl;
    return 0;
}