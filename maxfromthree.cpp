#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three number to check biggest among them"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"a is biggest number= "<<a;
    }
    else if (b>a&&b>c)
    {
        cout<<"b is biggest number= "<<b;
    }
    else
    cout<<"c is biggest number= "<<c;
    
}