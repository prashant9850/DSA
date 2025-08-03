#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number - ";
    cin>>n;
    array<char, 5> a = {'A', 'B', 'C', 'D', 'E'};
    for(int i=0;i<=n-1;i++){
        for(int j=n;j<=i;j++){
            for(int k=n;k>=0;k--){
                cout<<a[k];
            }
        }
        cout<<endl;
    }
}