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
    Complex operator +(Complex other)
    {
        return Complex(real+other.real,imag+other.imag);
    }
    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }


};
int main()
{
    Complex c1(2.5,3.5),c2(1.5,2.0);
    Complex c3=c1+c2;
    c3.display();

}