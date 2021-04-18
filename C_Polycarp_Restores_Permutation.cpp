#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin>>n;
    ll q[n-1];
    for(ll i=0;i<n-1;i++){
        cin>>q[i];
    }
    ll b[n-1];
    partial_sum(q,q+n-1,b);
    ll sum = 0;
    for(ll i=0;i<n-1;i++){
        sum+=b[i];
    }
    ll sum2 = n*(n+1)/2;
    ll res = (sum2-sum)/n;

    ll ans[n];
    ans[0] = res;
    for(ll i=1;i<n;i++){
        ans[i] = ans[0]+b[i-1]; 
    }
    int mp[n+1];
    memset(mp,0,sizeof(mp));
    for(auto i:ans){
        mp[i]++;
    }
    bool cond = true;
    for(ll i=1;i<=n;i++){
        if(!mp[i]){
            cond = false;
            break;
        }
    }
    if(cond==false){
        cout<<-1<<endl;
    }
    else{
        for(auto i:ans){
            cout<<i<<" ";
        }cout<<endl;
    }


    
    
}   