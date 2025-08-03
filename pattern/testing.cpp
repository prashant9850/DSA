#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number - ";
    cin>>n;
    int s;
   for(int i=1;i<=n;i++){
        if(i%2==0){
            s=0;
        }
        else{s=1;}
        for(int k=1;k<=i;k++){
            cout<<s<<" ";
            if(s==0){
                s=1;
            }
            else if(s==1){
                s=0;
            }
        }
    cout<<endl;
   }
}