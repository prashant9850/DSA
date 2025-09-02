#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << "Not a prime";
    } else {
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                count++;
            }
        }
        if (count == 2) {
            cout << "Prime";
        } else {
            cout << "Not a prime";
        }
    }
}
