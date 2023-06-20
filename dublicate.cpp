/*#include<iostream>
using namespace std;
void duplicate(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=j+1;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
            }
            break;

        
    }
}
}
int main()
{
   int arr[]={12,34,56,12,56,34};
   int n=8;
   duplicate(arr,n);

}
*/
#include <iostream>
using namespace std;

void Duplicates(int arr[], int n)
{
    cout << "Duplicate numbers in the array: ";
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break;  
            }
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {12, 34, 56, 12, 56, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    Duplicates(arr, n);
    
    return 0;
}
