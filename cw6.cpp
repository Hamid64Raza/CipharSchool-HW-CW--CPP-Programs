#include<iostream>
using namespace std;
int main()
{   int  radius;
    cout<<"Enter radius of circle"<<endl;
    cin>>radius;
    float a=cir(4);
    float b=aria(3);
    

}
    void cir(int r)
    {
        float circum=2*3.14*r;
        cout<<"Circumferance= "<<circum<<endl;
        
        
    }
    void  aria(int r)
    {
        float area=3.14*r*r;
        cout<<"Area of circle= "<<area;
        
    }