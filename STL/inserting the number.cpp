#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(30);
    v.push_back(10);
    v.push_back(50);
    v.push_back(20);

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

   
    return 0;
}
