#include<bits/stdc++.h>
using namespace std;
class Printer{
    public:
    void action(int copies)
    {
        cout<<"Printing "<<copies<<" copies"<<endl;
    }
    void action(string scanType)
    {
        cout<<"Scanning a "<<scanType<<" document"<<endl;
    }
    void action(string doc,bool fax)
    {
        if(fax)
        {
            cout<<"Faxing the document :"<<doc<<endl;

        }
    }

};
int main()
{
    Printer multifunctionalPrinter;
    multifunctionalPrinter.action(5);
    multifunctionalPrinter.action("color");
    multifunctionalPrinter.action("contract",true);
    return 0;
}