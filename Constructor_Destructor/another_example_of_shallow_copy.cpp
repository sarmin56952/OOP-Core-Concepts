#include<bits/stdc++.h>
using namespace std;
class Company{
    private:
    string* location;
    public:
    Company(string l)
    {
        location=new string(l);
    }
    Company(const Company &obj)
    {
        location=obj.location;
    }
    void changelocation(string loc)
    {
        *location=loc;
    }
    void display(int id)
    {
        cout<<"Company "<<id<<":"<<*location<<endl;
    }
    ~Company(){
        delete location;
    }

};
int main()
{

    Company c1("Dhaka");
    Company c2=c1;
    c1.display(1);
    c2.display(2);
    cout<<"After modifying Company 2:"<<endl;
    c2.changelocation("Sylhet");
    c1.display(1);
    c2.display(2);
}