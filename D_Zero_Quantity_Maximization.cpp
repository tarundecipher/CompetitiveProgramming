#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;

    ll a[n+1],b[n+1];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    long double c[n+1];
     map<long double,ll> mp;
     ll ma1 =0;
    for(ll i=0;i<n;i++){
        if(a[i]!=0){
        c[i] = -(long double)b[i]/(long double)a[i];
        mp[c[i]]++;
        }
        else if(a[i]==0 && b[i]==0){
            ma1++;
        }
        

        
    }
    ll ma =0;
    for(auto i:mp){
        ma = max(i.second,ma);
    }
    cout<<ma+ma1<<endl;
   



  




  
    
    
}   
