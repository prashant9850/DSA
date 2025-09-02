#include <bits/stdc++.h>
using namespace std;

int main() {
   array<char,5> A={'A','B','C','D','E'};
   for(int i=0;i<=5-1;i++){
      for(int k=0;k<=5-i-1;k++){
         cout<<" ";
      }
      for(int j=0;j<=i;j++){
         cout<<A[i]<<" ";
      }
      cout<<endl;
   }
    return 0;
}
