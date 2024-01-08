#include<iostream>
using namespace std;
class Outer
{
public:
        void display()
        {
            i.display();
        }
        class Inner
        {
        public:
                void display()
                {
                    cout<<"Display of Inner ";
                }
        };
        Inner i;
};
int main()
{
    Outer::Inner i;
    return 0;
}