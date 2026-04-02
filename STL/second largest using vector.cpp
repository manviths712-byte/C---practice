#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v;

    v={1,3,57,34,45,65,56};

    sort(v.begin(),v.end());

    cout<<"Second Largest ="<<v[v.size()-2];

    return 0;

}
