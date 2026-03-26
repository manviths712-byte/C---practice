#include<iostream>
using namespace std;

class Employee{
public:
    string name;
    int salary;

    static int totalEmployees;

    Employee(string name,int salary){
        this->name = name;
        this->salary = salary;
        totalEmployees++;
    }

    void display(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class Manager : public Employee{
public:

    Manager(string name,int salary) : Employee(name,salary){}

    void display(){
        cout<<"Manager Name: "<<name<<endl;
        cout<<"Manager Salary: "<<salary<<endl;
    }
};

int Employee::totalEmployees = 0;

int main(){

    Manager m1("Manvith",50000);
    Manager m2("Rahul",45000);

    m1.display();
    cout<<endl;
    m2.display();

    cout<<"\nTotal Employees: "<<Employee::totalEmployees<<endl;

    return 0;
}
