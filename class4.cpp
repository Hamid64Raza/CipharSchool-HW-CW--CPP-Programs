#include<iostream>
using namespace std;
class Triangle
{
    int side=12;
    public:
    void area()
    {
        int area=(side*side)/2;
        cout<<"area = "<<area<<endl;
    }
    void parimeter()
    {
        int perimeter=(side+side+side);
        cout<<"Parimeter = "<<perimeter;
    }
};

int main()
{
    Triangle ob1;
    ob1.area();
    ob1.parimeter();
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;


class triangle{

public:
void perimeter(float s1 , float s2 , float s3){

int value1 = s1 + s2 + s3;

cout<<value1<<" ";
}


void area(float s1,float s2){

int value2 = 0.5*s1*s2;
cout<<value2<<" ";
}



};
int main(){

triangle t;

float s1,s2,s3;
cin>>s1>>s2>>s3;
t.perimeter(s1,s2,s3);
t.area(s1,s2);
}*/