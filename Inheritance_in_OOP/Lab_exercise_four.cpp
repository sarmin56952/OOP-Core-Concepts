#include<bits/stdc++.h>
using namespace std;
class Device{
    protected:
    int deviceId;
    
    string status;
    public:
    Device(int id,string stat)
    {
        deviceId=id;
        status=stat;

    }
 


};
class Sensor: virtual public Device{
    protected:
    string sensitivity;
    public:
    Sensor(int id,string stat,string sen):Device(id,stat)
    {
        sensitivity=sen;
    }

};
class SmartDevice: virtual public Device{
    protected:
    string connectivityType;
    public:
    SmartDevice(int id,string stat,string conn):Device(id,stat)
    {
        connectivityType=conn;
    }

};
class SmartSensor:public Sensor,public SmartDevice{

    public:
    SmartSensor(int id,string stat,string sen,string conn):Device(id,stat),Sensor(id,stat,sen),SmartDevice(id,stat,conn){
        
    }
     void  showDetails()
    {
        cout<<"    ====Smart Details===    "<<endl;

        cout<<"Device Id         : "<<deviceId<<endl;
        cout<<"Status            : "<<status<<endl;
        cout<<"Sensitivity       : "<<sensitivity<<endl;
        cout<<"Connectivity Type : "<<connectivityType<<endl;

        
    }
};
int main()
{
    SmartSensor s1(26,"active","high","Wi-fi");
    s1.showDetails();

}