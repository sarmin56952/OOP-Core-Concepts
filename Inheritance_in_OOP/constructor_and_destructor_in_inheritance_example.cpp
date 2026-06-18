#include<bits/stdc++.h>
using namespace std;
class Parent{
    public:
    Parent()
    {
        cout<<"Inside base class"<<endl;

    }

};
class child:public Parent{
    public:
    child()
    {
        cout<<"Inside sub class"<<endl;
    }

};
int main()
{

    child obj;
    return 0;
}