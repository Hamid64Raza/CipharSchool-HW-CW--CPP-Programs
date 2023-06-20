#include<iostream>
using namespace std;
int main(){  
    int x,y,z;
       cout<<"Enter three number"<<endl;
    cin>>x>>y>>z;
    
    int add(int,int,int);
     
 
    cout<<add(x,y,z);
    

}
   int add(int a,int b,int c)
   {
       
       return a+b+c;
   }