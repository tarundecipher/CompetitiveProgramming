#include <iostream>
#include <bits/stdc++.h>
using namespace std;




int main(){
    int t; cin>>t;
    while(t--){
        double n,k; cin>>n>>k;
        
        double  t = k*(n/(n-1));
    
        int ans = t;
        int n1 = n;
        if(ans%n1==0){
            ans--;
        }
        cout<<ans<<endl;

    }

        
}