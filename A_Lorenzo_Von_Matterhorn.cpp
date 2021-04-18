#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

map<pair<ll,ll>,ll> mp;

void update(ll u,ll v,ll w){

    while(u!=v){
        if(u<v) swap(u,v);
        ll pa = u/2;
        mp[{u,pa}]+=w;
        u = pa;

    }
}

ll query(ll v,ll u){
    ll ans= 0;
    while(u!=v){
        if(u<v) swap(u,v);
        ll pa = u/2;
        ans+=mp[{u,pa}];
        u = pa;
    }
    return ans;
}


int main(){
    ll q; cin>>q;
    
    while(q--){
        ll t,v,u,w; cin>>t;
        if(t==1){
            cin>>v>>u>>w;
            update(u,v,w);
        }
        else{
            cin>>u>>v;
            cout<<query(u,v)<<endl;
        }
        
       
    }
    
}   