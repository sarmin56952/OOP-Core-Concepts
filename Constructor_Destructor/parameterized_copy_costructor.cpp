#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    int roll;
    double marks;
    public:
    Student(string name,int roll,double marks)
    {
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
 char  calculateGrade()
    {
        if(marks>=80)
        {
            return 'A';
        }
        else if(marks>=65&&marks<80)
        {
            return 'B';
        }
        else if(marks>=50&&marks<65){
            return 'C';
        }
        else{
            return 'F';
        }

    }
    void displayInfo()
    {
    
        cout<<"Name:"<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
        cout<<"Marks:"<<marks<<endl;
       cout<<"Grade : "<<calculateGrade()<<endl;

    }

};
int main()
{
    Student s1("sarmin",101,85.5);
    s1.displayInfo();

}