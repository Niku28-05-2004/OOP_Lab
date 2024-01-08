// length ,breadth is define in private we call access it in public

#include<iostream>
using namespace std;
class Rectangle 
{
private:
    int length;
    int breadth;
public:
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth)
    }
};
void main()
{
    Rectangle r1;
    r1.length=10;
    r2.breadth=15;
    cout<<"Area is :"<<r1.area()<<endl;
    cout<<"Perimeter is :"<<r1.perimeter()<<endl;

}