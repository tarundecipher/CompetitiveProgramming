#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n;
    ll a[2*n];
    for(ll i=0;i<2*n;i++){
        cin>>a[i];
    }
    sort(a,a+2*n);
    ll ans1 = (a[2*n-1] - a[n])*(a[n-1]-a[0]);
    ll ans2 = (a[2*n-1]-a[0]);
    ll ma = LLONG_MAX;
    for(ll i=1;i+n-1<=2*n-2;i++){
        ma = min(ma,ans2*(a[i+n-1]-a[i]));
    }
    cout<<min(ma,ans1)<<endl;


    

    
}   