#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll memo[100000][301];
ll clc(ll a[],ll time,ll k,ll n){
    if(k>=n){
        return 0;
    }
   
    if(memo[time][k]!=-1){
        
        return memo[time][k];
    }
    ll a1=0; ll a2=0;
    
        a1 = abs(a[k]-time) + clc(a,time+1,k+1,n);
        
    if(time<a[k]){
        a2 = clc(a,time+1,k,n);
    }
    else{
        a2 = INT_MAX;
    }
    memo[time][k] = min(a1,a2);
    return min(a1,a2);
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        memset(memo,-1,sizeof(memo));
       
        cout<<clc(a,1,0,n)<<endl;

    }
    
    
}   
