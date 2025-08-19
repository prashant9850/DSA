#include<bits/stdc++.h>
using namespace std;
void count(int n){
    if(n==0){
        cout<<"Enter a valid number.";
    }
    int c=0;
    while(n>0){
        n=n/10;
        c++;
    }
    cout<<"the no of digits is "<<c;
}

int main(){
   int n;
   cout<<"enter a number - ";
    cin>>n;
    count(n);
}