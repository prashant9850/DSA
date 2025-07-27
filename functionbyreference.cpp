//when we just pass the value in the function without '&' it takes a copy and past function workes on it
//when we pass the function with '&' it changes the original function value..
#include<bits/stdc++.h>
using namespace std;

int work(string &s){
    if( s[0]=='r'){
        s[0]='t'; 
        cout<<s;
    }
}

int main(){
    string s="raj";
    work(s); 
    cout<<s; 
}