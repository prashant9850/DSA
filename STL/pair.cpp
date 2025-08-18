#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int,int>a={3,5};
    cout<<a.first<<" "<<a.second;
    cout<<endl;

    pair<int,char>c={3,'b'};
    cout<<c.first<<" "<<c.second<<endl;

    pair<int,char> d[3]={{4,'a'},{67,'t'},{65,'h'}};
    for(int i=0;i<=2;i++){
        cout<<d[i].first<<" "<<d[i].second;
        cout<<endl;
    }

    pair<int,pair<int,int>> p={20,{3,2006}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
}