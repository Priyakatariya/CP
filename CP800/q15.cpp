#include <bits/stdc++.h>
using namespace std;

int main(){
     int t ;
     cin>>t;
     while(t--){

     int n ;
      cin>>n;
       long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long odd = 0;
        for (int i=0; i<n; i++) {
            if(a[i]%2==1)
                odd++;
        }
        if(odd%2==1)
            cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        return 0;
    }
   