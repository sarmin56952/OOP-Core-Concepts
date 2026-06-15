#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    virtual void introduce()
    {
        cout<<"I am a Person"<<endl;
    }

};
class Student:public Person{
    public:
    void introduce() override{
        cout<<"I am a student"<<endl;;
    }
};
class Teacher:public Person{
    public:
    void introduce() override{
        cout<<"I am a Teacher"<<endl;
    }

};
int main()
{

    Person *room[3];
    Person p;
    Student s;
    Teacher t;

    room[0]=&p;
    room[1]=&s;
    room[2]=&t;
    for(int i=0;i<3;i++)
    {
        room[i]->introduce();
    }
}