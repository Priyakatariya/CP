#include <bits/stdc++.h>
using namespace std;

int main (){
     int t;
      cin>>t;
       while (t--){
         long long n,a,b;
          cin>>n>>a>>b;
          if((a + b + 2 <= n) || (a == b && a == n))
            cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;
       }
         return 0;
}