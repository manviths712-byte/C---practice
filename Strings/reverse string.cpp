#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<char> s={'h','e','l','l','o'};

  int st=0,e=s.size()-1;

  while(st<e){
    swap(s[st],s[e]);
    st++;
    e--;
  }
  cout<<"Reverse string:";

  for(char c: s){
    cout<<c;
  }

  return 0;

}

