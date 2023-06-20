Gu
GUEST
3:47 PM
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

int target;
cin>>target;

// for(int i=0;i<n;i++){
// for(int j=i+1;j<n;j++){

// if(arr[i] + arr[j] == target)
// cout<<"yes"<<" ";
// break;

// }
// }


// sort function = nlogn complexity

sort(arr,arr+n);

// 1 2 3 4 4 5 7

int i = 0;
int j = n-1;
int flag = 0;
while(i<=j){
// cout<<arr[i]+arr[j]<<" ";
if(arr[i] + arr[j] == target){
cout<<"yes"<<" ";
flag = 1;
break;
}
else if(arr[i] + arr[j] > target){
j--;
}
else{
i++;
}
}
if(flag == 0)
cout<<"No"<<" ";

}
