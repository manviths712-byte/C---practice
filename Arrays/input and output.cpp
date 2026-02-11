#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the array number:"<<endl;
     cin>>n;
     
     int nums[n];
     
     cout<<"Enter the array elements:"<<endl;
     for(int i=0;i<n;i++){
         cin>>nums[i];
     }
     
     cout<<"The array elements are:"<<endl;
     for(int i=0;i<n;i++){
         cout<<nums[i]<<" ";
     }
    return 0;
}
