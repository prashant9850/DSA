#include<bits/stdc++.h>
using namespace std;

int main() {
    int num,rev=0;
    cout<<"enter a number - ";
    cin>>num;
    int og=num;
    while(num>0){
        rev=rev*10+num%10;
        num/=10;
    }
    if(rev==og){
        cout<<"is a palindrome.";
    }
    else{
        cout<<"not a palindrome.";
    }
}
