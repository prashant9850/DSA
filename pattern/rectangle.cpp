#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"rowes - ";
    cin>>r;
     cout<<"column - ";
    cin>>c;
    for(int i=0 ; i<=r-1 ; i++){
        for(int j=0 ; j<=c-1 ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}