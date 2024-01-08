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
    friend ifstream & operator<<(ifstream & ifs,Student &s);
};
  ifstream & operator<<(ifstream &ifs,Student &s)
{
    ifs>>s.name>>s.RollNo>>s.branch;
    return ifs;
}    

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

    ifstream ifs("Student.txt");
    ifs<<s1;
    cout<<" Name of Student :"<<s1.name<<endl;
    cout<<" Roll No of Student  :"<<s1.RollNo<<endl;
    cout<<" Branch Student  :"<<s1.branch<<endl;

    ifs.close();


}
