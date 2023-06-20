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
        cout<<"Avg = "<<avg;

    }
};
int main()
{
    Average(22,44,66);
}