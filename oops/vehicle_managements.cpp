#include<iostream>
using namespace std;

class Vehicle{
public:
    string brand;
    int speed;

    static int totalVehicles;

    Vehicle(string brand, int speed){
        this->brand = brand;
        this->speed = speed;
        totalVehicles++;
    }

    void showDetails(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Speed: "<<speed<<endl;
    }
};

class Car : public Vehicle{
public:

    Car(string brand, int speed) : Vehicle(brand,speed){}

    void showDetails(){
        cout<<"Car Brand: "<<brand<<endl;
        cout<<"Car Speed: "<<speed<<endl;
    }
};

int Vehicle::totalVehicles = 0;

int main(){

    Car c1("BMW",200);
    Car c2("Audi",220);
    Car c3("Tesla",250);

    c1.showDetails();
    cout<<endl;
    c2.showDetails();
    cout<<endl;
    c3.showDetails();

    cout<<"\nTotal Vehicles: "<<Vehicle::totalVehicles<<endl;

    return 0;
}
