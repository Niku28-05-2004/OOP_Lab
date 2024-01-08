#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream of("My Text",ios::trunc);
    of<<"Snehal"<<endl;
    of<<"37"<<endl;
    of<<"CSBS"<<endl;

    of.close();
}