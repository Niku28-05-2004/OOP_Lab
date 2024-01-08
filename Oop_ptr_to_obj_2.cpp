#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length*breadth);
    }
};
int main()
{
    Rectangle *ptr=new Rectangle;
    ptr->breadth=15;
    ptr->length=10;
    cout<<"Area of Rectangle  :"<<ptr->area()<<endl;
    cout<<"Perimeter of Rectangle: "<<ptr->perimeter()<<endl;
}