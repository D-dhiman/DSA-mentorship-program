#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n, k;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the number of rotations (k): ";
    cin >> k;
    if (k % 2 == 0) {
        for (int i = 0; i < k; i++) {
            int lastDigit = n % 10;
            n = n / 10 + (lastDigit * pow(10, (int)log10(n)));
        }
    } else {
        for (int i = 0; i < k; i++) {
            int firstDigit = n / pow(10, (int)log10(n));
            n = (n % (int)pow(10, (int)log10(n))) * 10 + firstDigit;
        }
    }
    cout<<"reversed digit is:";
    cout<< n;
}
