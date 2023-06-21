#include<iostream>
using namespace std;
class Poly
{    public:
     int fun(int x)
     {
        cout<<"Function with one argument"<<endl;
        return 1;
     }

     int fun(int x, int y)
    
    
     {
      cout<<"Function with two argument"<<endl;
     }

};
int main()
{
    Poly ob1;
    ob1.fun(1);
    ob1.fun(3,5);
}