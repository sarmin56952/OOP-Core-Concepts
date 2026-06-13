#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int id;
    Student()
    {
        name="Not Assigned";
        id=0;
        cout<<"Student record initialized"<<endl;
    }
    void displayDetails()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }

};
int main()
{
    Student s1;
    s1.displayDetails();

}
