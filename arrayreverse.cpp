#include <bits/stdc++.h>
using namespace std;

int main() {
   int a[5];
   cout<<"enter 5 numbers - ";
   for(int i = 0 ;i<=4;i++){
      cin>>a[i];
   }
   cout<<"the array is - ";
   for(int j=4 ; j>=0 ;j--){
    cout<<a[j];
    cout<<" ";
   }
}
