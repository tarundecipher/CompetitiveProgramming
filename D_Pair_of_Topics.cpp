#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n; cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll j=0;j<n;j++){
        cin>>b[j];
    }
    ll c[n];
    for(ll i=0;i<n;i++){
        c[i] = b[i] - a[i];
    }
      multiset<ll> v;
    ll ans=0;
    for(ll i=0;i<n;i++){
        auto it = v.upper_bound(c[i]);
       
        ll t = i-*it;
        if(t>0){
        ans+=t;
        }
       
        v.insert(-c[i]);
       
    }
    cout<<ans<<endl;
    
}   
