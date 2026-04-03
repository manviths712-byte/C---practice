#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    queue<int> q;

    q.push(10);
    q.push(15);
    q.push(30);
    

    cout<<"The Top of the queue is :"<<q.front()<<endl;

    q.pop();

    cout<<"After the Pop of the queue :"<<q.front()<<endl;

    return 0;


}
