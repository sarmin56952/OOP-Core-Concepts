// #include<bits/stdc++.h>
// using namespace std;
// class Device{
//     public:
//     virtual void turnOn()
//     {
//         cout<<"Device is powering up"<<endl;
//     }

// };
// class SmartPhone:public Device{
//     public:
//     void turnOn() override{
//         cout<<"Smartphone screen lights up,showing the home screen"<<endl;
//     }

// };
// class Laptop:public Device{
//     public:
//     void turnOn() override{
//         cout<<"Laptop boots up,showing the operating system logo."<<endl;
//     }
// };
// class SmartTv:public Device{
//     public:
//     void turnOn() override{
//         cout<<"SmartTv turns on, displaying the streaming menu"<<endl;
//     }
// };

// void deviceSimulator(Device* device)
// {
//     device->turnOn();
// }
// int main()
// {

//     Device* d1=new SmartPhone();
//     Device* d2=new Laptop();
//     Device* d3=new SmartTv();
//     deviceSimulator(d1);
//     deviceSimulator(d2);
//     deviceSimulator(d3);
//     delete d1;
//     delete d2;
//     delete d3;
//     return 0;

// }

#include<bits/stdc++.h>
using namespace std;
class Device{
    public:
    virtual void turnOn()
    {
        cout<<"Smartphone screen lights up,shoing the home screen"<<endl;
    }

};
class Laptop:public Device{
    public:
    void turnOn() override{
        cout<<"Laptop boots up,showing the operating system logo."<<endl;
    }

};
class SmartTv:public Device{
    public:
    void turnOn() override{
        cout<<"SmartTV turns on ,displaying the streaming menu."<<endl;
    }
};
void deviceSimulation(Device* device)
{
    device->turnOn();
}

int main()
{
    Device d;
    d.turnOn();
    Device* d1=new Laptop();
    Device* d2=new SmartTv();

    deviceSimulation(d1);
    deviceSimulation(d2);
    return 0;

}