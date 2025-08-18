#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5,100);
    for(int i=0 ;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it=v.begin();
    v[0]=45;
    v[1]=46;
    cout<<endl;
    cout<<v[3];
    cout<<*it<<" ";
    it++;
    cout<<*it;
    cout<<endl;
    v[4]=79;
    vector<int>::iterator ti=v.end()-1;
    cout<<*ti;
    cout<<endl;
    cout<<v.back();
}

//v.erese(v.begin())+1) can use to be sresed.
//for start end delete give delete+1.