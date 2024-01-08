#include<iostream>
using namespace std;

class Base
{
public:
          Base()
          {
            cout<<"Constructor of Base "<<endl;
          }
     virtual ~Base()
        {
            cout<<"Destrutor of Base "<<endl;
        }   
};
class Derived: public Base
{
public : 
          Derived()
          {
            cout<<"Constructor of Derived "<<endl;
          }
         ~Derived()
         {
            cout<<" Destrutor of Derived "<<endl;
         }
};
void fun()
{
    Base *p=new Derived();
    delete p;
}
int main()
{
    fun();
}