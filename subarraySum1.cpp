//Sub-Array-Concept.


#include <bits/stdc++.h>
using namespace std;

// sum = prefix[j] - prefix[i-1]

int main(){

int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){
cin>>arr[i];
}

int maxSum = 0;

int prefixSum[n];

prefixSum[0] = arr[0];

for(int i=1;i<n;i++){
prefixSum[i] = prefixSum[i-1] + arr[i];
}

for(int i=0;i<n;i++){


for(int j=0;j<n;j++){
int sum = 0;

if(i==0 && j==0){
sum = arr[i];
}
else if(i==0){
sum = prefixSum[j];
}
else{
sum = prefixSum[j] - prefixSum[i-1];
}

maxSum = max(maxSum,sum);

}

}

cout<<maxSum<<" ";



}
