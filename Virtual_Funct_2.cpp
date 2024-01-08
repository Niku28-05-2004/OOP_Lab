#include<iostream>
using namespace std;
class BasicCar
{
public:
        virtual void start()
        {
            cout<<"Basic Car is  Started "<<endl;
        }
};
class AdvanceCar: public BasicCar
{
public:
        void start()
        {
            cout<<"Advance Car is Started  ";
        }
};
int main()
{
     BasicCar *ptr=new AdvanceCar();
     ptr->start();
     return 0;
}