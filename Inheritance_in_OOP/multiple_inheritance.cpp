#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    public:
    Vehicle()
    {
        cout<<"This is a Vehicle"<<endl;
    }

};
class FourWheeler{
    public:
    FourWheeler()
    {
        cout<<"This is a 4 Wheeler"<<endl;
    }
};
class Car:public Vehicle,public FourWheeler{
    public:
    Car()
    {
        cout<<"This 4 Wheeler Vehicle is a car"<<endl;
    }
};

int main()
{
    Car obj;
    return 0;

}