#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many eliment you wnat to enter into the array"<<endl;
    cin>>n;
    cout<<"Now enter elements"<<endl;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<"Your array is :-";
    for(int i=0;i<n;i++)
    {
        cout<<x[i];
    }
    cout<<endl;
    cout<<"Now see the sum of your array"<<endl;
    int sum;
    for(int i=0;i<5;i++)
    {
        sum=sum+x[i];
    }
    cout<<sum;


}
//write a program to find program is in lowercase or upercase.