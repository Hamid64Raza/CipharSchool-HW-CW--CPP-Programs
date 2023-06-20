
GUEST
3:28 PM
#include <bits/stdc++.h>
using namespace std;

int main(){


int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}

int target1,target2;


cin>>target1>>target2;

int count1=0,count2=0;
for(int i=0;i<n;i++){

if(arr[i] == target1){
count1++;
}
else if(arr[i] == target2){
count2++;
}
}

cout<<count1<<" "<<count2<<" ";

}