#include<bits/stdc++.h>
using namespace std;
class Student{
private:
    string name;
    int rollNumber;
    int marks;
public:
    Student(string n,int r,int m)
    {

        name=n;
        rollNumber=r;
        marks=m;

    }
    void displayDetails()
    {

        cout<<name<<endl<<rollNumber<<endl<<marks<<endl;
    }
};
int main()
{
    string name;
    cout<<"Enter Your Name :";
    getline(cin,name);

    cout<<"Enter your roll and marks :";
    int roll,marks;
    cin>>roll>>marks;

  Student s(name,roll,marks);
      s.displayDetails();


}
