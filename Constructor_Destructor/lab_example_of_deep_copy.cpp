#include<bits/stdc++.h>
using namespace std;
class Person{
    private:
    string* name;
    public:
    Person(string n)
    {
        name=new string(n);
    }
    Person(const Person &obj)
    {
        name=new string(*(obj.name));
    }
    void setName(string n)
    {
        *name=n;
    }
    void disPlay_Name(int i)
    {
        cout<<"Person "<<i<<":"<<*name<<endl;
    }

};
int main()
{
    Person p1("AAA");
    Person p2=p1;
    p1.disPlay_Name(1);
    p2.disPlay_Name(2);
    cout<<"After modifying Person 2:"<<endl;
    p2.setName("BBB");

    p1.disPlay_Name(1);
    p2.disPlay_Name(2);
}