#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    protected:
    string make;
    string model;
    int year;
    int mileage;
    public:
    Vehicle(string m,string mo,int y,int mi)
    {
        make=m;
        model=mo;
        year=y;
        mileage=mi;
    }
    void start()
    {
        cout<<"Starting the vehicle...."<<endl;
    }
    void stop()
    {
        cout<<"Stopping the vehicle..."<<endl;
    }
    void displayInfo()
    {
        cout<<"Make :"<<make<<" Model :"<<model<<" Year :"<<year<<", Mileage:"<<mileage<<endl;
    }
};
class Car:public Vehicle{
    private:
    int numberOfdoor;
    bool isconvertable;
    public:
    Car(string m,string mo,int y,int mil,int door,bool convertable):Vehicle(m,mo,y,mil){

        numberOfdoor=door;
        isconvertable=convertable;
    }
    void openTrunk()
    {
        cout<<"Opening the car trunk...."<<endl;
    }
    void displayInfo()
    {
        Vehicle::displayInfo();
        cout<<"Doors:"<<numberOfdoor<<",Convertable :"<<(isconvertable?"YES":"No")<<endl;
    }

};
class Truck:public Vehicle{
    private:
    int loadCapacity;
    int numberOfAxel;
    public:
    Truck(string m,string mo,int y,int mil,int capacity,int axel):Vehicle(m,mo,y,mil){
        loadCapacity=capacity;
        numberOfAxel=axel;
    }
    void dumpLoad()
    {
        cout<<"Dumping the truck Load..."<<endl;
    }

    void displayInfo(){
        Vehicle::displayInfo();
        cout<<"Load capacity:"<<loadCapacity<<"tons,Axel:"<<numberOfAxel<<endl;
    }
};
int main()
{
    Car car1("Toyota","corolla",2019,15000,4,false);
    Truck truck1("Ford","F-150",2018,50000,3,2);
    car1.start();
    car1.displayInfo();
    car1.openTrunk();
    truck1.start();
    truck1.displayInfo();
    truck1.dumpLoad();
    

}