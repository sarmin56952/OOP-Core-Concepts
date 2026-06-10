#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
protected:
    int id;
private:
    float cgpa;
    public:
    Student(string n,int i,float c)
    {

        name=n;
        id=i;
        cgpa=c;
    }
    void display_info()
    {

        cout<<"Name :"<<name<<"\nId :"<<id<<"\ncgpa :"<<cgpa<<endl;

    }
    void calculate_grade()
    {
        cout<<"Grade :";

        if(cgpa>=3.75)
        {

            cout<<'A'<<endl;
        }
        else if(cgpa>=3.00)
        {

            cout<<'B'<<endl;

        }
        else{
            cout<<'F'<<endl;
        }
    }



};
int main()
{


   string s;
   cout<<"Enter your Name :";
   getline(cin,s);
    cout<<"Enter your Id :";
   int Id;
   cin>>Id;
    cout<<"Enter your Cg :";
   float cg;
   cin>>cg;
    Student s1(s,Id,cg);
    s1.display_info();
    s1.calculate_grade();





}
