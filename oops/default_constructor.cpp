#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int marks;

    Student(){
        name = "Manvith";
        marks = 95;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){

    Student s1;

    s1.display();

    return 0;
}
