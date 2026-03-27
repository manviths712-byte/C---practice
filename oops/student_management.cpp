#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int marks;

    static int totalStudents;

    Student(string name,int marks){
        this->name = name;
        this->marks = marks;
        totalStudents++;
    }

    void showDetails(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

class Topper : public Student{
public:

    Topper(string name,int marks) : Student(name,marks){}

    void showDetails(){
        cout<<"Topper Name: "<<name<<endl;
        cout<<"Topper Marks: "<<marks<<endl;
    }
};

int Student::totalStudents = 0;

int main(){

    Topper s1("Manvith",95);
    Topper s2("Rahul",90);

    s1.showDetails();
    cout<<endl;
    s2.showDetails();

    cout<<"\nTotal Students: "<<Student::totalStudents<<endl;

    return 0;
}
