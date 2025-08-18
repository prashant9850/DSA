#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin >> v[i];
    }

    // print original vector
    for(int i=0;i<5;i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // erase 3 elements (index 1,2,3)
    v.erase(v.begin()+1, v.begin()+4);

    // print using iterator
    vector<int>::iterator it = v.begin();
    for(int i=0;i<v.size();i++){
        cout << *it << " ";
        it++;
    }
    cout << endl;   // ✅ add this to separate outputs

    // insert element
    v.insert(v.begin()+1, 2);

    // print final vector
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}
