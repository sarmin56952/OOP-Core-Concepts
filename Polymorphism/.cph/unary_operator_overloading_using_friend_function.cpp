#include<bits/stdc++.h>
using namespace std;
class Distance{
    public:
    int x;
    Distance(int i=0)
    {
        x=i;

    }
    friend int operator -( Distance &obj)
    {
        int x=-obj.x;
        return x;
    }
    friend int operator --( Distance &ob)
    {
        --ob.x;
       
       return ob.x;

    }
    void display()
    {
        cout<<x<<endl;
    }

};
int main()
{
    Distance d1(4);

    Distance d2=-d1;
    d2.display();
    Distance d3=--d1;
    d3.display();


}