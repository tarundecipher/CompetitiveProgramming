#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll prime(ll n){
    if(n==1){
        return 1;
    }
    ll ans = n;
    ll p=2;
    if(n%2==0){
        ans = __gcd(ans,p);
    }
    while(n%2==0){
        n=n/2;
    }
    for(ll i=3;i*i<=n;i+=2){
        if(n%i==0){
            ans = __gcd(ans,i);
            // cout<<i;
            while(n%i==0){
            n=n/i;
            }
            
        }
    }
    if(n>2){
         ans = __gcd(ans,n);
    }
    

    return ans;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n;
    ll a1 = prime(n);  
     
    cout<<a1<<endl;

}   