#include<iostream>
using namespace std;
class Rectangle
{
private:
int length;
int breadth;

public:
void setLength(int l)
{
    length l;
}
void setBreadth(int b)
{
    breadth b;
}
int getLength()
{
    return length;
}
int getBreadth()
{
    return breadth;
}
};
void main()
{
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(15);
    cout<<"Area is :"<<r1.area()<<endl;
    cout<<"Perimeter is :"<<r1.perimeter()<<endl;
}