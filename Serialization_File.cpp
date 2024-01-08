#include<iostream>
#include<fstream>
using namespace std;

class Student
{
public:
    string name;
    int RollNo;
    string branch;
    friend ofstream & operator<<(ofstream & ofs,Student &s);
};
ofstream & operator<<(ofstream &ofs,Student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.RollNo<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}
int main()
{
    Student s1;
    s1.name="Snehal";s1.RollNo=37;s1.branch=" CSBS ";

    ofstream ofs("Student.txt",ios::trunc);
    ofs<<s1.name<<endl;
    ofs<<s1.RollNo<<endl;
    ofs<<s1.branch<<endl;
    
    ofs<<s1;
    ofs.close();


}
