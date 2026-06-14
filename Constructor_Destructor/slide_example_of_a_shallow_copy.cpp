#include<bits/stdc++.h>
using namespace std;
class Demo{

    private:
    int a;
    int b;
    int *p;
    public:
    Demo()
    {
        p=new int;

    }
    void setdata(int x,int y,int z)
    {
        a=x;
        b=y;
        *p=z;

    }
    void showdata()
    {
        *p=8;
        cout<<"Value of a is: "<<a<<endl;
        cout<<"Value of b is: "<<b<<endl;
        cout<<"Value of *p is: "<<*p<<endl;
        printf("%p\n",p);
    }



};
int main()
{
    Demo d1;
    d1.setdata(4,5,7);
    Demo d2=d1;
    d1.showdata();
    cout<<endl<<endl;
    d2.showdata();
    return 0;

}