#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    int target =9;

    v={2,7,11,15};

     sort(v.begin(), v.end());

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
          if(v[i]+v[j]==9){
            cout<<"Numbers :"<<v[i]<<" "<<v[j]<<endl;
          }
        }
    }
    return 0;
  
}
