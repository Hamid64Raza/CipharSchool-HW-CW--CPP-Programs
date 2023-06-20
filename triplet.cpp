// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int triplet(int arr[] , int n){
   int c=0;
   for(int i=0; i<n;i++){
       for(int j =i+1; j< n;j++){
         if(arr[i] ==arr[j]){
           for(int k=j+1; k<n;k++){
               if(arr[i]==arr[k]){
                   cout<<arr[i]<<endl;
                   c++;
                   break;
               }
           }}
       }
   }
   return c;
 
}

int main() {
    int arr[] = {12,34,56,4,56,12,56,34,12,14};
    int n =10;
    int answer = triplet(arr,n);
    cout<<"size : "<<answer;

    return 0;
}