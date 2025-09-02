#include <bits/stdc++.h>
using namespace std;

int main() {
   int num1,num2,GCD=0;
   cout<<"enter 2 numbers - ";
   cin>>num1>>num2;
   for(int i=1;i<=num1;i++){
    if(num1%i==0){
        if(num2%i==0){
            GCD=i;
        }
    }
   }
   cout<<GCD;
}
