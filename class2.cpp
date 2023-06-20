#include<iostream>
using namespace std;
class laptop
{
    int price;
    string model;
    public:
        void discription(int ,string);
};

void laptop :: discription(int x, string y)
{
    cout<<"This function is defined outside the class"<<endl;
    price=x;
    cout<<"price= "<<x<<endl;
    model=y;
    cout<<"model= "<<y;

}

int main()
{
    laptop ob1;
    ob1.discription(2888,"dell");
}