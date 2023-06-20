#include<iostream>
using namespace std;    
int main()
{
     int max=0,min;
    int a[10]={2,3,4,1,5,6,9,7,8,33};
    for(int i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
      
        }

    }
    cout<<"max= "<<max<<endl;
    cout<<"min= "<<min;
}