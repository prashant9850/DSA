#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    int sum=0;
    cout<<"enter a number : ";
    cin >> num;
   while(num>0){
    int d=num%10;
    sum=sum*10+d;
    num=num/10;
   }
   cout<<sum;
}
