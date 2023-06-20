*/
#include <bits/stdc++.h>
using namespace std;


int main(){

int n;
cin>>n;

int arr[n-1];

for(int i=0;i<n-1;i++){
cin>>arr[i];
}

sort(arr,arr+n-1);

// 1 2 3 5
int missingElement = -1;
for(int i=0;i<n-1;i++){
if(arr[i]!=i+1){
missingElement = i+1;
break;
}
}
cout<<missingElement;