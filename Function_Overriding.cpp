#include<iostream>
using namespace std;
class Base
{
public:
       void Display()
       {
        cout<<"Display of Base"<<endl;
       }
};
class Derived:public Base
{
public:
         void Display()
        {
          cout<<"Display of Derived "<<endl;
        }
};
int main()
{
    Derived d;
    Base b;
    b.Display();
    d.Display();
    return 0;
}