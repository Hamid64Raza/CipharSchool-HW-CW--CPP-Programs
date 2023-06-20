#include<iostream>
using namespace std;
int sumarray()
{    int sum=0;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        sum=arr[i]+sum;

    }
    return sum;
}
int main()
{
    cout<<sumarray();
    return 0;
}