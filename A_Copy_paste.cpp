#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
     int t; cin>>t;
     while(t--){
         int n,k; cin>>n>>k;
         int a[n];
         int mi =  INT_MAX;
         for(int i=0;i<n;i++){
             cin>>a[i];
             mi = min(mi,a[i]);
         }
        
         int ans =0;
         bool cond = false;
         for(int i=0;i<n;i++){
             if(a[i]!=mi || cond==true){
             int diff = k-a[i];
             ans+=(diff/mi);
            
             }
             else if(a[i]==mi){
                 cond = true;
             }
         }
         cout<<ans<<endl;

     }
    
}   