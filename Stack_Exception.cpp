#include<iostream>
using namespace std;

class StackOverflow:exception{};
class StackUnderflow:exception{};

class Stack
{
private:
       int *stk;
       int top=1;
       int size;
public:
       stack(int sz)
       {
        size=sz;
        stk=new int[size];
       }
void push(int x)
{
    if(top==size-1)
       throw StackOverflow();
       top++;
       stk[top]=x;
}
int pop()
{
    if(top==-1)
        throw StackUnderflow();
        return stk[top--];
}
};
int main()
{
    Stack s(5);

    s.push(2);
    s.push(78);
    s.push(90);
    s.push(53);
    s.push(34);
    s.push(22);

}