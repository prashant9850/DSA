#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<int> v(5);
   v.push_back(6);
   v[4]=7;
   for(int i=0;i<=v.size()-1;i++){
      cout<<v[i]<<" ";
   }

   
    return 0;
}
