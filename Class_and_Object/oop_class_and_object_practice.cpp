#include<bits/stdc++.h>
using namespace std;
class Box{

private:

    double length,breadth,height;
public:
    void setDimensions(double l,double b,double h)
    {

        length=l;
        breadth=b;
        height=h;
    }
    double calculateVolume()
    {

        return length*breadth*height;
    }


};
int main()
{
    int t;
    cout<<"Enter Number of test case : ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter length , breath and height : ";
    double l,b,h;
    cin>>l>>b>>h;
    Box b1;
    b1.setDimensions(l,b,h);
    cout<<b1.calculateVolume()<<endl;

    }



}
