#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter any year to know wather it is leap year or not"<<endl;
    cin>>year;
    if(year%2==0)
    {
        cout<<"leap year";
    }
    else
    cout<<"non leap year";
}