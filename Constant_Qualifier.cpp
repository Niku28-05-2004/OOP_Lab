#include<iostream>
using namespace std;
int main()
{
    const int x=10;
    int *ptr=&x;
    ++ptr;
    cout<<*ptr<<" \n"<<x<<endl;
    return 0;
}