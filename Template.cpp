
#include <iostream>

using namespace std;
int n;
template<class T>
#define size 20
void sort(T a[size])
{
    int i,j;
    T temp;
    for(i=0; i<n; i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<", ";
    }
}
int main()
{
    int a[size],ch;
    float b[size];
    
    cout<<"Menu"<<endl;
    cout<<"1.Integer Array"<<endl;
    cout<<"2.Float Array"<<endl;
    cout<<"Enter your choice:- ";
    cin>>ch;
    switch(ch)
    {
        case 1:
              cout<<"Enter size of Array:- ";
              cin>>n;
              cout<<"Enter Array Element:- "<<endl;
              for(int i=0;i<n;i++)
              {
                  cin>>a[i];
              }
              sort(a);
              break;
        case 2:
              cout<<"Enter size of Array:- ";
              cin>>n;
              cout<<"Enter Array Element:- "<<endl;
              for(int i=0;i<n;i++)
              {
                  cin>>b[i];
              }
              sort(b);
              break;      
              
    }
    return 0;
}