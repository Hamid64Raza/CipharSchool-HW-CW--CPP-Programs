#include <iostream>
using namespace std;
int main() {
    int arr[] = {12,45,67,23,65,87,90,1,32,68,45,99,111};
     int size = sizeof(arr)/sizeof(int);
    int Fmax= -1;
    int  Smax = -1;
    for(int i=0; i <size; i++){
       if(arr[i]> Fmax){
           Smax = Fmax;
           Fmax = arr[i];
       }
       if(arr[i] < Fmax && arr[i]> Smax){
           Smax = arr[i];
       }
    }
    cout<< "maximum value :"<<Fmax<<endl;;
    cout<<"Second max  value :"<<Smax<<endl;

    return 0;
}