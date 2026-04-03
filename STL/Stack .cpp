#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    

    cout<<"The Top of the stack is :"<<s.top()<<endl;

    s.pop();

    cout<<"After the Pop of the stack :"<<s.top()<<endl;

    return 0;


}
