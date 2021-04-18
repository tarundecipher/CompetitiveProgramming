#include <iostream>
#include <bits/stdc++.h>
#define ll long long int

using namespace std;





int main(){
    ll n,q; cin>>n>>q;
    ll a[n];
    ll k[q];
    ll sum[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    partial_sum(a,a+n,sum);
    for(ll i=0;i<q;i++){
        cin>>k[i];
    }
    
    ll y=0;

    for(ll j=0;j<q;j++){
        ll arrows = k[j];
        auto i = upper_bound(sum,sum+n,arrows+y);
        ll t= i - sum;
        
        
        if(n-t==0){
            cout<<n<<endl;
           
            
        }
        else{
            cout<<n-t<<endl;
        }
        if(t==n){
            y=0;
        }
        else{
            y+=k[j];
        }
    }
    
}   