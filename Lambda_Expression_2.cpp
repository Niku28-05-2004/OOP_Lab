#include<iostream>
using namespace std;

int main()
{
    int a=10;
    auto f=[&a]()
    {
        cout<<a++<<endl;
    };
    f();
    a++;
    f();
}