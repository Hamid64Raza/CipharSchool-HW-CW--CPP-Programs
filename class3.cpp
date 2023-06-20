#include<iostream>
using namespace std;

    class Student
    {
        string name;
        int roll;
        public:
        Student()
        {
            cout<<"I am default constructor"<<endl;
        }
        Student(int x,string y)
        {
            roll=x;
            name=y;
            cout<<"I am in paramatarised constructor";
        }
    };

 int main()
 {
    Student();
    Student(33,"rohit");
 }