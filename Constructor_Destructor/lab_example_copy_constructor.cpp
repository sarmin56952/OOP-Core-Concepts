#include<bits/stdc++.h>
using namespace std;
class Employee{
    private:
    string name;
    int salary;
    public:
    Employee(string n,int s)
    {
         cout<<"Copy Constructor Called"<<endl;
        name=n;
        salary=s;
    }
    Employee(const Employee &obj)
    {
       
           name=obj.name;
           salary=obj.salary;

    }

    void disPlay(int i)
    {
        cout<<"Employee "<<i<<":"<<name<<", Salary:"<<salary<<endl;
    }

};
int main()
{
    Employee e1("AAA",50000);
    Employee e2=e1;
    e1.disPlay(1);
    e2.disPlay(2);

}