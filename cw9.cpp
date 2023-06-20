#include<iostream>
using namespace std;
int main()
{    int n;
    cout<<"Enter nuber to know its memory  address"<<endl;
    cin>>n;
    int* x;
    x=&n;
    cout<<x;
}