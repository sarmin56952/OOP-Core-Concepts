#include<bits/stdc++.h>
using namespace std;
class Book{
    private:
    string* title;
    public:
    Book()
    {
        title=new string("");
        
    }
    Book(string t)
    {
        title=new string(t);
    }
    void setTitle(string t)
    {
        *title=t;
    }
    void display()
    {
        cout<<"Book Title: "<<*title<<endl;
    }
    ~Book()
    {
        cout<<"Destructor called for "<<*title<<endl;
        delete title;
    }


};
int main()
{
    
    Book* bookArr=new Book[2];
    bookArr[0].setTitle("C++ Programming");
    bookArr[1].setTitle("Data Structures");
    bookArr[0].display();
    bookArr[1].display();
    delete[] bookArr;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// class Book{
//     private:
//     string* title;
//     public:
//     Book()
//     {
//         title=new string("");
//     }
//     void setData(string t)
//     {

//         *title=t;
//     }
//     void disPlay()
//     {
//         cout<<"Book Title: "<<*title<<endl;
//     }
//     ~Book()
//     {
//         cout<<"Destructor called for "<<*title<<endl;
//     }


// };
// int main()
// {
//     Book* bookArr=new Book[2];
//     bookArr[0].setData("C++ Programming");
//     bookArr[1].setData("Data Structures");
//     bookArr[0].disPlay();
//     bookArr[1].disPlay();
//     delete[] bookArr;
// }