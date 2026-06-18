#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    public:
    Vehicle()
    {
        cout<<"This is a Vehicle"<<endl;
    }

};
class fourWheeler:public Vehicle{
    public:
    fourWheeler()
    {
        cout<<"4 wheeler vehicle"<<endl;
    }
};
class Car:public fourWheeler{
    public:
    Car()
    {
        cout<<"This 4 wheeler Vehicle is a Car"<<endl;
    }
};
int main()
{
    Car obj;
    return 0;
}