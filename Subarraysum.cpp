#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];                                        // Brute force approch
    }
    
int maxSum = 0;

for(int i=0;i<n;i++){


for(int j=0;j<n;j++){
int sum = 0;
for(int k=i;k<=j;k++){
sum = sum + arr[k];
maxSum = max(sum,maxSum);
}
}
}

cout<<maxSum<<" ";
}





























/*#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,3,1,5,8,2,9,4,7,6,7,5};
    
    int max=6;
    int i*,j*,*k;
    int sum;
    for(i=0;i<13;i++)
    {
        for(j=i+1;j<13;j++)
        {
          for(k=j+1;k<13;k++)
          {
            if(arr[i]+arr[j]+arr[k]==max)
            {
                sum=
            }
          }
        }
    }
}*/