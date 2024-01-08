#include<iostream>
using namespace std;
class student
{
private:
        int Rollno;
        string name;
        int mathMarks;
        int phyMarks;
        int chemMarks;
public:
student(int r,string n,int m,int p,int c)
{
    Rollno=r;
    name=n;
    mathMarks=m;
    phyMarks=p;
    chemMarks=c;
}
int total()
{
    return mathMarks+phyMarks+chemMarks;
}
char Grade()
{
    float average=total()/3;
    if(average>60)
    return'A';
    else if(average>=40 && average<60)
    return 'B';
    else 
      return'C';
}
};
int main()
{
    int Rollno;
    string name;
    int m,p,c;
    cout<<"Enter Rollno of Student :";
    cin>>Rollno;
    cout<<"Enter Name of Student :";
    cin>>name;
    cout<<"Enter marks 3 Subject :";
    cin>>m>>p>>c;
    student s(Rollno,name,m,p,c);
    cout<<"Total Marks :"<<s.total()<<endl;
    cout<<"Grade of Student :"<<s.Grade()<<endl;
}
