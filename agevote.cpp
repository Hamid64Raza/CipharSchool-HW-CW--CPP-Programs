#include<iostream>
using namespace std;
int main()
{  int age;
   char gender;

    cout<<"Enter your age"<<endl;
    cin>>age;
    cout<<"Enter your gender like (female type='f' and for male type='m')"<<endl;
    cin>>gender;
    if(age>18)
    {
        cout<<"you can vote"<<endl;
    }
     
    else if( gender=='f' || gender=='F' )
    {
    cout<<"go to room number 6";
    }
    else if(gender=='m' || gender=='M')
    {
        cout<<"go to room number 7";
    }
    else
    cout<<"you can not vote";

    

}