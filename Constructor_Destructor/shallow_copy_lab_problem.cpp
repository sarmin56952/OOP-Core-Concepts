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
    Person(const Person &obj){
        name=(obj.name);
    }
    void setName(string n){
        *name=n;
    }
    void showData(int i)
    {
        cout<<"Person "<<i<<":"<<*name<<endl;
    }


};
int main()
{
    Person p1("AAA");
    Person p2=p1;
    p1.showData(1);
    p2.showData(2);
    cout<<"After Modifying Person 2:"<<endl;
    p2.setName("BBB");
    p1.showData(1);
    p2.showData(2);
    
}