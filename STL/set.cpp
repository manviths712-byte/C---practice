#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;

    s.insert(40);
    s.insert(10);
    s.insert(40);
    s.insert(20);

    cout<<"Elements in set:"<<endl;

    for(int x : s){
        cout<<x<<" ";
    }

    cout<<endl;

    if(s.find(20) != s.end()){
        cout<<"20 Found in set"<<endl;
    }
    else{
        cout<<"20 Not Found"<<endl;
    }

    return 0;
}
