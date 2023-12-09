#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
    float real, imag;

public:
    complex() {}
    complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    complex operator+(complex c)
    {
    complex temp;
    temp.real = c.real + real;
    temp.imag = c.imag + imag;
    return temp;
    }
    friend complex operator-(complex, complex);
    void display()
    {
        cout << real << "+" << imag << "i"<< "\n";
    }
};
complex operator-(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;
    return temp;
}
int main()
{
    complex c1(10.5, 30.5), c2(9.5, 14.5), c3;
    cout << "\nFirst complex number is :";
    c1.display();
    cout << "\nSecond complex number is :";
    c2.display();
    cout << "\nComplex number addition is = ";
    c3 = c1 + c2; //   equivalent to c1.operator+ ( c2 )
    c3.display();
    cout << "\nComplex number substraction is = ";
    c3 = c1 - c2; //   equivalent to operator1 ( c1, c2 )
    c3.display();
    return 0;
}
