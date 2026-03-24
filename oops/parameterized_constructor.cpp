#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int age;

    Student(string name, int age){
        this->name = name;
        this->age = age;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){

    Student s1("Manvith",20);
    Student s2("Rahul",21);

    s1.display();
    cout<<endl;
    s2.display();

    return 0;
}
