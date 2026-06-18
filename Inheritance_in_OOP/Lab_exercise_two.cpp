#include<bits/stdc++.h>
using namespace std;
class Employee{
    protected:
    string name;
    int employeeID;

     public:
     Employee(string n,int id)
     {
        name=n;
        employeeID=id;
     }
     void showDetails()
     {
        cout<<"---Employee Details---"<<endl;
        cout<<"Nmae : "<<name<<endl<<"Employee ID: "<<employeeID<<endl;

     }

};
class Salary:public Employee{
   protected:
    int basicPay;
    int bonus;
    public:
    Salary(string n,int id,int bas,int bo):Employee(n,id){
        basicPay=bas;
        bonus =bo;
    }
    void showSalaryDetails()
    {
        Employee::showDetails();
        cout<<endl<<endl;
        cout<<"--- Initial Salary Details---"<<endl;
        cout<<"Basic Pay :"<<basicPay<<endl;
        cout<<"Bonus :"<<bonus<<endl;
        cout<<"Total Salary :"<<basicPay+bonus<<endl;


    }

    void updateSalary(int bspa,int bon)
    {
        cout<<"Update Salary Detail...."<<endl;
        basicPay=bspa;
        bonus=bon;
        cout<<"Basic Pay : "<<basicPay<<endl;
        cout<<"Bonus: "<<bonus<<endl;
        cout<<"Total Salary :"<<basicPay+bonus<<endl;

    }
};
int main()
{

    Salary s("Tahsin",202,50000,12000);
    // s.showDetails();
    cout<<endl;
    s.showSalaryDetails();
    cout<<endl;
    s.updateSalary(55000,15000);

}