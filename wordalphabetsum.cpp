#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum = 0;
    array<char, 26> alpha = {'a','b','c','d','e','f','g','h','i','j','k','l',
                             'm','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    string word;
    cout << "Enter word: ";
    cin >> word;

    int len = word.size();
    cout << "Length = " << len << endl;

    for (int i = 0; i < len; i++) {
        auto it = find(alpha.begin(), alpha.end(), word[i]);
        if (it != alpha.end()) {
            int index = distance(alpha.begin(), it)+1;
            sum += index;
        }
    }

    cout << "Final sum of indices = " << sum << endl;

    return 0;
}
