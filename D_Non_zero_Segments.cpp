#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n; cin>>n;
    ll a[n]; ll b[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    
    ll count = 0;
    unordered_map<ll,ll> occur;
    ll sum  =0;
    // occur[0]++;
    for(ll i=0;i<n;i++){
        sum+=a[i];
        
        if(occur[sum]==1|| sum==0){
            count++;
            occur.clear();
            sum = a[i];
            
        }
        occur[sum]++;
        
    }
    
    cout<<count<<endl;
   
    
    

    
}   