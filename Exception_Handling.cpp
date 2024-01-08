#include<iostream>
using namespace std;
int main()
{
    int x=10, y=5,z;
    try
    {
        if(y==0)
        throw 1;
        z=x/y;
        cout<<z<<endl;
    }
    catch(int e)
    {
       cout<<"Division by Zero\n "<<e<<endl;
    }
    cout<<" Bye "<<endl;
}