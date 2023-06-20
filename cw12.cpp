#include<iostream>
using namespace std;
int main()
{    cout<<"Enter number to know its type"<<endl;
      int n,i,count=0;
      cin>>n;
    for(i=2;i<=n;i++){
        if(n%i==0)
        
            count=count+1;
        
  
    }
          if(count==1)
        {
            cout<<"Prime number";
        }
        else{
        cout<<"not prime";
        }
}