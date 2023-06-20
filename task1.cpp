#include<iostream>
using namespace std;
int main()
{   char ch;
   cout<<"Enter a,b,c Either in uppercase or lowercase";
   cin>>ch;
    char a[4]={'A','B','C'};
    char b[4]={'a','b','c'};
    if(ch=='A')
    {
     cout<<"uppercase";
    }
    else if(ch=='a')
    {
        cout<<"lowercase";
    }
    else if(ch=='B')
    {
        cout<<"uppercase";
    }
    else if(ch=='b')
    {
        cout<<"lowercase";
    }
    else if(ch=='C')
    {
        cout<<"Uppercase";
    }
    else if(ch=='c')
    {
        cout<<"lowercase";
    }
    else 
    cout<<"Enter valid letter form given option";

}