#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "prashant";
    int length = s.size();

    for (int i = 0; i <= length - 1; i++) {
        if (s[i] == 'a') {
            s[i]='A';
        }
        cout << s[i] << endl;
    }

    return 0;
}
