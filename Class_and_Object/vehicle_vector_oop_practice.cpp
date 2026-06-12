// #include<bits/stdc++.h>
// using namespace std;
// class Vehicle{
//     private:
//     string brand,model;
//     int yearOfManufacture;
//     int topSpeed;
//     public:
//     Vehicle(string b,string m,int y,int t)
//     {
//         brand=b;
//         model=m;
//         yearOfManufacture=y;
//         topSpeed=t;
//     }
//     void showDetails()
//     {
//         cout<<"Brand: "<<brand<<endl;
//         cout<<"Model: "<<model<<endl;
//         cout<<"Year of Manufacture: "<<yearOfManufacture<<endl;
//         cout<<"Top Speed: "<<topSpeed<<" km/h"<<endl;
//         cout<<"----------------------"<<endl;
//     }

// };
// int main()
// {
//     int t;
//     cin>>t;
//     vector<Vehicle>v;
//     while(t--)
//     {
       
//         string b,m;
       
//         int y,to;
//          cin>>b>>m;
//         cin>>y>>to;
         
//         v.push_back(Vehicle(b,m,y,to));
//     }
//         for(int i=0;i<v.size();i++)
//         {
         

//             v[i].showDetails();
//         }
       
    

// }

#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    private:
    string brand;
    string model;
    int manufacture_of_year;
    int top_speed;
    public:
    Vehicle(string b,string m,int y,int t)
    {
        brand =b;
        model=m;
        manufacture_of_year=y;
        top_speed=t;

    }

    void showDisplay()
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year of Manufacture: "<<manufacture_of_year<<endl;
        cout<<"Top Speed: "<<top_speed<<" km/h"<<endl;
        cout<<"----------------------"<<endl;

    }
};
int main()
{
    int n;
    cin>>n;
    vector<Vehicle>v;
    for(int i=0;i<n;i++)
    {
        string b,m;
        cin>>b>>m;
        int y,t;
        cin>>y>>t;
        v.push_back(Vehicle(b,m,y,t));


    }
    for(int i=0;i<n;i++)
    {
        v[i].showDisplay();
    }

}