#include<iostream>
using namespace std;
class Rectangle
{
public:
      void area()
      {
        cout<<"Area of Rectangle \n";
      }
};
class Cuboid:public Rectangle
{
public:
       void Volume()
       {
        cout<<"Volume of Cuboid ";
       }
};
int main()
{
    Cuboid c;
    c.area();
    c.Volume();
    return 0;
}