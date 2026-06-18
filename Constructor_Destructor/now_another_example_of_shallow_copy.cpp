#include<bits/stdc++.h>
using namespace std;
class Painting{
    private:
    string* title;
    public:
    Painting(string t)
    {
        title=new string(t);
    }
    Painting(const Painting &obj)
    {
        title=(obj.title);
    }
    void updateTitle(string t)
    {
        *title=t;
    }
    void displayDetails(int i)
    {
        cout<<"Painting "<<i<<":"<<*title<<endl;
    }

};
int main()
{
    Painting p1("Mona Lisa");
    Painting p2=p1;
 
    p1.displayDetails(1);
    p2.displayDetails(2);
       cout<<"After modifying Painting 2:"<<endl;
       p2.updateTitle("The Starry Night");
p1.displayDetails(1);
    p2.displayDetails(2);

}