#include<bits/stdc++.h>
using namespace std;
class Employee{
    protected:
    string name;
    int employeeID;
    public:
    Employee(string n,int em)
    {
        name=n;
        employeeID=em;
    }
    void disPlayInfo()

    {
        cout<<"Name :"<<name<<endl;
        cout<<"Employee ID:"<<employeeID<<endl;
    }
  

};

class Doctor:public Employee{
    string tab,specialization;
    public:

     Doctor(string n,int id,string ta,string spe):Employee(n,id){
         tab=ta;
         specialization=spe;
     }
     void prescribeMedication()
     {
        cout<<"Prescription : "<<name<<"Has prescriber "<<tab<<endl;
     }
     void disPlayInfo()
     {
        cout<<"----Doctor Details----"<<endl;

        Employee::disPlayInfo();
        prescribeMedication();
     }

};
class Nurse:public Employee{
    string shift;
    public:
    Nurse(string n,int id,string sh):Employee(n,id)
    {
        shift=sh;

    }
    void disPlayInfo()
    {
        cout<<"----Nurse Details----"<<endl;
        Employee::disPlayInfo();
        cout<<"Shift Details : "<<shift<<endl;
    }
};
int main()
{
    Doctor d1("Dr. Nafis",101,"Paracetamol","Cardiology");
    Nurse n1("Nusrat",205,"Night Shift");
    d1.disPlayInfo();
    cout<<endl;
    n1.disPlayInfo();
    return 0;
}