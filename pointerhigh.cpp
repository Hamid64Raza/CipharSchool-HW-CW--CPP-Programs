#include<iostream>
using namespace std;

int main()
{
    int x = 3;
    float y = 1.3;
    void* ptr = &y;
    void* ptr1 = &x;

      float* floatPtr = static_cast<float*>(ptr);
    cout << *floatPtr << endl;

      int* intPtr = static_cast<int*>(ptr1);
    cout << *intPtr << endl;

    return 0;
}