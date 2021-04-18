#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,d; cin>>n>>d;
    pair<ll,ll> a[n];
    // memset(memo,-1,sizeof(memo));
    for(ll i=0;i<n;i++){
        ll t1,t2; cin>>t1>>t2;
        a[i].first = t1; a[i].second = t2;
    }
    sort(a,a+n);
    ll c[n];
    c[0] = a[0].second;
    for(ll i=1;i<n;i++){
        c[i] = c[i-1] + a[i].second;
        
    }

    ll p1 =0; ll p2 =0;
    ll ma = INT_MIN;
    while(p1<n && p2<n){
        
        while(a[p1].first-a[p2].first>=d){
            p2++;

        }
        if(p2==0){
            ma = max(ma,c[p1]);
        }
        else{
            ma = max(ma,c[p1]-c[p2-1]);
        }
        p1++;

    }
    
    cout<<ma<<endl;
    
   

}   