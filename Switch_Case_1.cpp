#include<iostream>
using namespace std;
int main()
{
    char operation;
    double a,b;

cout<<"Enter Operation (+,-,*,/) :";
cin>>operation;

cout<<"Enter Two Number :";
cin>>a>>b;

     switch(operation)
  {
    case '+':
        cout<< a << "+"<< b <<" = "<< a+b <<endl;
        break;
    case '-':
        cout<< a << "-"<< b <<" = "<< a+b <<endl;
        break;
    case '*':
         cout<< a << "*"<< b <<" = "<< a+b <<endl;
        break;
    case '/':
        cout<< a << "/"<< b<<" = " << a+b <<endl;
        break;
    default:
         cout<<"Invalid Operation.";
         break;         
   }
   return 0;
}