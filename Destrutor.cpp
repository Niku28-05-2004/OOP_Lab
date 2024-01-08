#include<iostream>
using namespace std;

class Demo
{
public:
     Demo()
     {
        //p=new int[10];
        cout<<"Constructor of Demo \n";
     }
     ~Demo()
     {
       // delete[] p;
        cout<<"Destructor of Demo";
     }
};
void fun()
{
   Demo d;
}
int main()
{
    fun();
}