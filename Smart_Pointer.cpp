#include<iostream>
using namespace std;

class Rectangle
{
private:
         int length;
         int breadth;
public:
          Rectangle(int l, int b)
          {
            length=l;
            breadth=b;
          }
    int area()
    {
        return length*breadth;
    }
};
int main()
{
    unique_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout<<ptr->area()<<endl;
    
    unique_ptr<Rectangle> ptr2;
    ptr2=move(ptr);
    cout<<ptr2->area();
}