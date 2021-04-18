#include <bits/stdc++.h>
#define ll long long int
using namespace std;

map<ll,ll> mp;
void clc(ll n){
    
    if(n%2==0){
        
        while(n%2==0){
            n = n/2;
            mp[2]++;
        }
    }
    for(ll i=3;i*i<=n;i+=2){
        if(n%i==0){
            while(n%i==0){
                n=n/i;
                mp[i]++;
            }
        }
    }
    if(n>2){
        mp[n]++;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n;
    ll a[n];
    ll num=1;
    for(ll i=0;i<n;i++){
        cin>>a[i];
      
    }
    num = a[0];
    for(ll i=1;i<n;i++){
          num = __gcd(num,a[i]);
    }
    clc(num);
    ll res  = 1;
    for(auto i:mp){
        res*= (i.second+1);
    }
    cout<<res<<endl;
        
    

}
