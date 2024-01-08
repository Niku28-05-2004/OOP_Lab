#include<iostream>
using namespace std;
class Student
{
public:
      int RollNo;
      string Name;
      static  int addNo;
      Student(string n)
      {
        addNo++;
        RollNo=addNo;
        Name=n;
      }
      void display()
      {
        cout<<"Name :"<<Name<<endl<<"Roll NO :"<<RollNo<<endl;
      }
};
int Student::addNo=0;
int main()
{
    Student s1("Snehal");
    Student s2("Dhancha");
    Student s3("Kaushal");
    Student s4("Aniket");
    Student s5("Pratik");

    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    cout<<"No of Addmission "<<Student::addNo<<endl;
    return 0;
}