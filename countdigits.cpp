#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout<<"enter a number : ";
    cin>>num;
    int count=0;
    while(num>0){
        int d=num%10;
        count++;
        num/=10;
    }
    cout<<count;
}