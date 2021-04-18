#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n; cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];

    }
    sort(a,a+n);
    ll siz = 0;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        if(!mp[a[i]-1] && a[i]-1>0){
            mp[a[i]-1]++;
            siz++;
        }
        else if(!mp[a[i]]){
            mp[a[i]]++;
            siz++;
        }
        
        else if(!mp[a[i]+1]){
            mp[a[i]+1]++;
            siz++;
        }
    }
    
    cout<<siz<<endl;
    

}
