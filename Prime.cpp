#include <iostream>
using namespace std;
int main() {
    cout << "Enter a number: ";
    int num;
    cin >> num;
    if (num <= 1) {
        cout << "Not a prime number";
        return 0;
    }
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            cout << "Not a prime number";
            return 0;
        }
    }
    cout << "Prime number";  // will print only if no divisor is found
    return 0;
}
