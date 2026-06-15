#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
    float real,imag;
    public:
    Complex(float r=0,float i=0)
    {
        real=r;
        imag=i;
    }
    friend Complex operator +(Complex obj1,Complex obj2)
    {
        Complex res;
        res.real=obj1.real+obj2.real;
        res.imag=obj1.imag+obj2.imag;
        return res;
    }
    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }


};
int main()
{
    Complex c1(2.5,3.5),c2(3.5,2.5);
    Complex c3=c1+c2;
    c3.display();

}