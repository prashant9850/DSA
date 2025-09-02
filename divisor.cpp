#include<bits/stdc++.h>
using namespace std;

int main() {
   int num,dig;
   cout<<"enter a number - ";
   cin>>num;
   for(int i=1;i<=num;i++){
    dig=num%i;
    if(dig==0){
        cout<<i<<" ";
    }
   }
}
