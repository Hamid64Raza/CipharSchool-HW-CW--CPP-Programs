#include<iostream>
using namespace std;
void increment(int&);
void decrement(int&);
int main()
{
    int x=12;
    int y=13;
    increment(x);
    decrement(y);
    cout<<x<<endl;
    cout<<y;
}
void  increment(int& a)
{
    a++;
    //cout<<a;
}
void decrement(int& b)
{
    b--;
    //cout<<b;
}