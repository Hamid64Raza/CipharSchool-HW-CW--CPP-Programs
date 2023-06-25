#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>   arr;
    
    
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Size = "<<arr.size();
    cout<<endl;
    cout<<arr.at(2)<<endl;
    cout<<arr.at(1)<<endl;
    cout<<arr.at(0)<<endl;
    
    arr.pop_back();

    for(int i=0;i<100;i++)
    {
        arr.push_back(i+1);
        cout<<arr.size()<<endl;
        
    }
    
}