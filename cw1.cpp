#include<iostream>
using namespace std;
int main()
{
    int arr[6]={5,6,7,8,9,10};
    int sum;
    for(int i=0;i<6;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
}