#include<iostream>
using namespace std;
int search(int);
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter eliment to Know its Index Number"<<endl;
    int eliment;
    cin>>eliment;
    search(arr,eliment);
    

}

   void search(int arr[],int eliment)
   {
    for(int i=0;i<=eliment;i++)
    {
           if(arr[i]==eliment){
            cout<<"index number is = "<<arr[i];
           }
        
        break;
    }

   }


/*
#include<iostream>
using namespace std;

int search(int arr[], int size, int element); // Function declaration

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter element to know its index number: ";
    int element;
    cin >> element;

    int index = search(arr, size, element);
    if (index != -1)
    {
        cout << "Index number is: " << index << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

int search(int arr[], int size, int element) // Function definition
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i; // Return the index if element found
        }
    }
    
    return -1; // Return -1 if element not found
}
*/