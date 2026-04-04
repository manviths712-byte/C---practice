#include<iostream>
#include<map>
using namespace std;

int main(){

    map<string,int> m;

    m["Manvith"] = 100;
    m["Jeevan"] = 95;
    m["Sharath"] = 98;

    cout<<"Student Marks:"<<endl;

    for(auto x : m){
        cout<<x.first<<" : "<<x.second<<endl;
    }

    if(m.find("Manvith") != m.end()){
        cout<<"Manvith Found"<<endl;
    }
    else{
        cout<<"Manvith Not Found"<<endl;
    }

    return 0;
}
