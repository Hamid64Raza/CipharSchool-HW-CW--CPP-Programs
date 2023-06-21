#include<iostream>
#include<string.h>
using namespace std;
class Student{
    string name;
    int rollNumber;
    public:
     void setter(string n,int r)
     {
        name=n;
        rollNumber=r;
     }
     void getter()
     {
        cout<<"Name = "<<name<<endl;
        cout<<"Roll Number = "<<rollNumber;
     }

};

int main()
{
    Student ob1;
    ob1.setter("Boreck",22);
    ob1.getter();
}