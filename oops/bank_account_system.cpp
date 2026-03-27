#include<iostream>
using namespace std;

class BankAccount{
public:
    string holderName;
    int balance;

    static int totalAccounts;

    BankAccount(string holderName,int balance){
        this->holderName = holderName;
        this->balance = balance;
        totalAccounts++;
    }

    void display(){
        cout<<"Account Holder: "<<holderName<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

class SavingsAccount : public BankAccount{
public:

    SavingsAccount(string holderName,int balance) : BankAccount(holderName,balance){}

    void display(){
        cout<<"Savings Holder: "<<holderName<<endl;
        cout<<"Savings Balance: "<<balance<<endl;
    }
};

int BankAccount::totalAccounts = 0;

int main(){

    SavingsAccount a1("Manvith",10000);
    SavingsAccount a2("Ajay",8000);

    a1.display();
    cout<<endl;
    a2.display();

    cout<<"\nTotal Accounts: "<<BankAccount::totalAccounts<<endl;

    return 0;
}
