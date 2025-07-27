#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b) {
    int add = a + b;
    return add;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers - ";
    cin >> num1 >> num2;

    int result = sum(num1, num2);  // Store returned value
    cout << "Sum is = " << result << endl;

    return 0;
}
//look for the storing of vsrisble logic...