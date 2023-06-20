#include<iostream>
using namespace std;
int main()
{
int side1,side2,side3;
cout<<"Enter sides of triangle to know if it can form or not"<<endl;
cin>>side1>>side2>>side3;
if((side1*side1)+(side2*side2)==(side3*side3))
{
    cout<<"triangle formed";
}
else 
cout<<"not a triangle";
}

