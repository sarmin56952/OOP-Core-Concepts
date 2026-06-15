#include<bits/stdc++.h>
using namespace std;
class Point{
    public:
    int x,y;
    Point(int r=0,int i=0)
    {
        x=r;
        y=i;

    }
    Point operator +(Point const& obj)
    {
        Point res;
        res.x=x+obj.x;
        res.y=y+obj.y;
        return res;

    }
    void display()
    {
        cout<<x<<","<<y<<endl;
    }
};
int main()
{

    Point p1(3,4),p2(1,2);
    Point p3=p1+p2;
    p3.display();
    return 0;

}