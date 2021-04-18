#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t;
    while(t--){
        ll n,m; cin>>n>>m;
        ll a[n];
        ll s =0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s==m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}   
