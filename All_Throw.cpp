#include<iostream>
using namespace std;
class MyException: exception
{
};
int Division(int a,int b)throw(MyException)
{
    if(b==0)
       throw MyException();
       return a/b;
}
int main()
{
    int x=10,y=0,z;

    try
    {
        {
            z=Division(x,y);
            cout<<z<<endl;
        }
    }
    catch(MyException e)
    {
        cout<<"Division by Zero "<<endl;
    }
    cout<<"Bye"<<endl;
}