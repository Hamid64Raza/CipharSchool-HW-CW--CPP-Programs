#include<iostream>
using namespace std;
 double avg(int a, int b, int c, int d)
{
    return (a+b+c+d)/4.0;
}
int main()
{
    cout<<avg(1,2,3,4);
    return 0;
}