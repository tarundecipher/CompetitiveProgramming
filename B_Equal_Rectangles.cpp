#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll a[4*n];
        map<ll,ll> freq;
        for(ll i=0;i<4*n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        bool cond = true;
        for(auto i:freq){
            if(i.second%2!=0){
                cond = false;
            }
        }
        sort(a,a+4*n);
        ll p = a[0]*a[4*n-1];
        
        for(ll i=1;i<(2*n);i++){
            if(a[i]*a[4*n-1-i]!=p){
                cond =  false;
                break;
            }
        }
        if(cond){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    
}
}
