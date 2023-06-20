#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age<14 && age>=0)
    {
        cout<<"you are child";
    }
    else if(age>=14 && age<60)
    {
        cout<<"you are adult";
    }
    else if(age>60)
    {
        cout<<"you are senior citizen";
    }
    

}