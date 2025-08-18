#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.emplace_back(7);
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> vec(5,100);
    vec[3]=500;
     for(int i =0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}