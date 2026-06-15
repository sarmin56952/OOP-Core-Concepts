// #include<bits/stdc++.h>
// using namespace std;
// class Distance{
//     public:
//     int x;
//     Distance(int i=0)
//     {
//         x=i;
//     }
//     Distance operator -()
//     {
//         Distance res;
//         res.x=-x;
//       return res;

//     }
//     Distance operator --()
//     {
//        --x;
//         if(x<0)x=0;
//        return x;

//     }
//     void display()
//     {
//         cout<<x<<endl;
//     }

// };
// int main()
// {
//     Distance d1(5);
//   Distance d2=  - d1;
//     d2.display();
  
//     --d1;
//     d1.display();
// }
#include<bits/stdc++.h>
using namespace std;
class Distance{
    public:
    int x;
    Distance(int i=0)
    {
        x=i;
    }
    int operator -()
    {
        
       return -x;
    }
    int operator --()
    {
        --x;
        return x;
    }
    void display()
    {
        cout<<x<<endl;
    }

};

int main()
{
    Distance d1(4);
    int d2=-d1;
    cout<<d2<<endl;
    int d3=--d1;
    cout<<d3<<endl;
    return 0;
}