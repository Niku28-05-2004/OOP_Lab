#include<iostream>
using namespace std;

class Demo
{
public:
        const int x=10;   //constant Value can not change the value of x
        int y=20;

        void Display()
        {
            x++;
            cout<<x<<" "<<y<<endl;
        }
};
int main()
{
    Demo d;
    d.Display();
}
