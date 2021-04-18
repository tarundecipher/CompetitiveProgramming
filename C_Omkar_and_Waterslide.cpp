#include <iostream>
#include <bits/stdc++.h>
using namespace std;





int main(){
     long long int t; cin>>t;
    while(t--){
        long long int n;  cin>>n;
        long long int a[n];
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
        long long int mi[n],ma[n];
        ma[0] = a[0];
        for(long long int i=1;i<n;i++){
            ma[i] = max(ma[i-1],a[i]);
        }
         mi[n-1] = a[n-1];
        for(long long int i=n-2;i>=0;i--){
            mi[i] = min(mi[i+1],a[i]);
        }

        long long int ans = 0;
        for(long long int i=0;i<n-1;i++){
            ans = max(ans,ma[i]-mi[i+1]);
        }
        cout<<ans<<endl;
        
    }


}