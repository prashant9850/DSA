#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, reverse = 0;
    cout<<"enter a number : ";
    cin >> num;
   while(num>0){
    int d=num%10;
    cout<<d;
    num=num/10;
   }
}
