#include<iostream>
using namespace std;
class Average
{
    int a1,a2,a3;
    public:
    Average(int x,int y,int z)
    {
        a1=x;
        a2=y;
        a3=z;
        int avg=(a1+a2+a3)/3;
        cout<<"Avg = "<<avg<<endl;

    }
    Average(Average &s1)
    {
        cout<<"hi i am copy constructor";
    }
};
int main()
{
    Average s1(22,44,66);
    Average s2(s1);
}