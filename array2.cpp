#include<iostream>
using namespace std;
int main()
{   int b[10];
    cout<<"Enter 10 eliment in array"<<endl;
    int a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i=10;i>=0;i--)
    {
        cin>>b[i];
    }
      for(int i=0;i<=10;i++)
    {
        cout<<b[i];
    }
    
}