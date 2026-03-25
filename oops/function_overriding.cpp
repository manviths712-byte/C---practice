#include<iostream>
using namespace std;

class Shape{
public:
    void draw(){
        cout<<"Drawing Shape"<<endl;
    }
};

class Circle : public Shape{
public:
    void draw(){
        cout<<"Drawing Circle"<<endl;
    }
};

int main(){

    Circle c1;

    c1.draw();

    return 0;
}
