#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("My Text");

    if(ifs)cout<<"File is Opened\n"<<endl;
    string name;
    int roll;
    string branch;
    
    ifs>>name>>roll>>branch;
    ifs.close();

    cout<<"Name :"<<name<<endl;
    cout<<"Roll No : "<<roll<<endl;
    cout<<"Branch :"<<branch<<endl;
}