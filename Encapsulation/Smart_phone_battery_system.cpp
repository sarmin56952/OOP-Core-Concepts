#include<bits/stdc++.h>
using namespace std;
class SmartPhone{
    private:
    string brand;
    int batterylevel;
    public:
    SmartPhone(string b,int ba)
    {
        brand=b;
        batterylevel=ba;

    }
    void usePhone(int dischargeAmount)
    {
        if(batterylevel-dischargeAmount<0){
           cout << brand << " is now 0% and turned OFF!" << endl;
           batterylevel=0;

        }
        else{
             batterylevel-=dischargeAmount;

        }
       

    }
    void chargePhone(int chargeAmount)
    {
        if(batterylevel+chargeAmount>100)
        {
           cout << "Battery is fully charged to 100%!" << endl;
           batterylevel=100;

        }
        else{
            batterylevel+=chargeAmount;
        }

    }
    void checkBattery() const{
        cout<<"Current charge amount is :"<<batterylevel<<endl;
    }

};
int main()
{
     string br;
    cin>>br;
    int x;
    cin>>x;
   
    if(x>=0&&x<=100)
    {
        SmartPhone s(br,x);
        s.chargePhone(70);
        s.usePhone(30);
        s.checkBattery();
    }
    

}