#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

sort(arr,arr+n);
int target;
cin>>target;


int i=0;
int j=n-1;
int count = 0;

for(int k=0;k<n;k++){
int p = arr[k];
target2 = target - p;

while(i<j){

if(arr[i] + arr[j] == target2){
i++;
j--;
count++;
}
else if(arr[i] + arr[j] > target2){
j--;
}
else{
i++;
}

}
}

cout<<count<<" ";



}