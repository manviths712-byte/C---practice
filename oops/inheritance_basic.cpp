#include<iostream>
using namespace std;

class Vehicle{
public:
    int speed;
};

class Car : public Vehicle{
public:
    string brand;
};

int main(){

    Car c1;

    c1.speed = 120;
    c1.brand = "BMW";

    cout<<"Brand: "<<c1.brand<<endl;
    cout<<"Speed: "<<c1.speed<<endl;

    return 0;
}
