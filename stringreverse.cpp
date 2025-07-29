#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter a string - ";
    cin>>s;
    int l=s.size();
    cout<<"reverse string is - ";
    for(int i=l-1;i>=0;i--){
        cout<<s[i];
    }
}