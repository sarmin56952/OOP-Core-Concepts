#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    virtual void performRole(){
        cout<<"Person is living their life."<<endl;
    }

};
class Employee:public Person{
    public:
    void performRole() override{
        cout<<"Person is working as an employee."<<endl;
    }
};
class Parent:public Person{
    public:
    void performRole() override{
        cout<<"Person is taking care of their children parent."<<endl;

    }
};
class Customer:public Person{
    public:
    void performRole() override{
        cout<<"Person is buying something as a custormer"<<endl;
    }
};
void roleSimulation(Person* person)
{
    person->performRole();
}

int main()
{
    Person* p1=new Employee();
    Person* p2=new Parent();
    Person* p3=new Customer();
    roleSimulation(p1);
    roleSimulation(p2);
    roleSimulation(p3);
    delete p1;
    delete p2;
    delete p3;

}