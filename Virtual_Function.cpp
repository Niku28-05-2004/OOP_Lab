#include<iostream>
using namespace std;
class Base
{
public:
    virtual void fun()
    {
        cout<<"Fun of Base ";
    }
};
class Derived: public Base
{
public:
    void fun()
    {
        cout<<"Fun of Derived";
    }
};
int main()
{
    Derived d;
    Base *ptr=&d;
    ptr->fun();
    return 0;
}