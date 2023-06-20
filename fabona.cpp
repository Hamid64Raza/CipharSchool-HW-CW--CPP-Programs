#include<iostream>
using namespace std;
int fabo(int);
  int n,a=0,b=1,c;
int main()
{
    cout<<"Enter number"<<endl;
    
    cin>>n;
    fabo(n);
    
    
}

 int fabo(int x)
 {
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        c=a;
        a=b;
        b=c;
        
    }
    cout<<c;
 }