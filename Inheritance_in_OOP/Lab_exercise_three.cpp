#include<bits/stdc++.h>
using namespace std;
class Person{
    protected:
   string name ;
   string dept;
   public:
   Person(string n,string de){
    name=n;
    dept=de;

   }


};
class Student:public Person{
    protected:
    int student_id;
    string course;
    public:
    Student(string n,string de,int id,string cou):Person(n,de)
    {
        student_id=id;
        course=cou;
    }


};
class GraduateStudent:public Student{
    protected:
    string thesis;
    string supervisor;
    public:
    GraduateStudent(string n,string de,int id,string cou,string the,string sup):Student(n,de,id,cou){
        thesis=the;
        supervisor=sup;
    }

    void showDetails()
    {
        cout<<"----Graduate Student Profile----"<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Student ID :"<<student_id<<endl;
        cout<<"Department :"<<dept<<endl;
        cout<<"Course :"<<course<<endl;
        cout<<"Thesis Topic :"<<thesis<<endl;
        cout<<"Supervisor: "<<supervisor<<endl;
    }
};
int main()
{

    GraduateStudent g("Anik Rahman","cse",2402026,"Computer Science","AI in Healthcare","Dr,Sayed");
   g.showDetails();
}