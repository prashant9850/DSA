#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        int s;

        if(i % 2 == 0){
            s = 0;
        } else {
            s = 1;
        }

        for(int j = 1; j <= i; j++){
            cout << s << " ";
            if(s == 1){
                s = 0;
            }
            else if(s == 0){
                s = 1;
            }
        }

        cout << endl;
    }

    return 0;
}
