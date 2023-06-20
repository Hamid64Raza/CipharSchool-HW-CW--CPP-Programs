#include<iostream>
using namespace std;

int main() {
    cout << "Enter a number to determine its type: " << endl;
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "Not a prime number." << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Prime number." << endl;
    } else {
        cout << "Not a prime number." << endl;
    }

    return 0;
}
