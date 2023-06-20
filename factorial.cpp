#include<iostream>
using namespace std;
int facto(int);
int main()
{
    cout<<"Enter number to know its Factorial"<<endl;
    int n;
    cin>>n;
  int s= facto(n);
  cout<<"Factorial of "<<n<<" "<<"is= "<<s;
}
int facto(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
      return fact;
}