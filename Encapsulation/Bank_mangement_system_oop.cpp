#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
    int accountNumber;
    string accountHolder;
    double balance;
    public:
    BankAccount(int accNumber,string accHolder,double initialBalance){
        accountNumber=accNumber;
        accountHolder=accHolder;
       balance= initialBalance;
    }

    void deposite(double amount){
        if(amount>0)
        {
            balance+=amount;
            cout<<"Deposite: $"<<amount<<"New balance"<<balance<<endl;
        }
        else{
            cout<<"Invalid deposite balance"<<endl;
        }
        
    }
    void withdraw(double amount)
    {
        if(amount>0&&amount<=balance)
        {
            balance-=amount;
            cout<<"Withdrew : $"<<amount<<".New balance: $"<<balance<<endl;
        }
        else{
            cout<<"Insufficient funds of invalid withdrawal amount!"<<endl;
        }
    }
    void checkBalance() const{
        cout<<"Current balance $:"<<balance<<endl;
    }
};

int main()
{
     BankAccount myAccount(343324,"sarmin",10000);
     myAccount.checkBalance();
     myAccount.deposite(6000);
     myAccount.withdraw(5000);
     myAccount.checkBalance();
     return 0;


}