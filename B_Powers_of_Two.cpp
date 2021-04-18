#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n;
    ll a[n];
    unordered_map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll p2[32];
    for(ll i=0;i<31;i++){
        p2[i] = pow(2,i);
    }
    ll ans = 0;
   
     for(ll j=0;j<31;j++){
          unordered_map<ll,ll> visited;
    for(ll i=0;i<n;i++){
        ll num = p2[j]-a[i];
            if(a[i]!=num && mp[num]>0 ){
                if(visited[num]==0 && visited[a[i]]==0){
                ans+=mp[num]*mp[a[i]];
                visited[num]++;
                visited[a[i]]++;
                }
                // cout<<a[i]<<" "<<num<<endl;
            }
            else if(a[i]==num && mp[num]>=2 && visited[num]==0){
                ans+=(mp[num]*(mp[num]-1))/2;
                // cout<<(mp[num]*(mp[num]-1))/2<<endl;
                //  cout<<a[i]<<" "<<num<<endl;
                 visited[num]++;
            }
        
        }
    }
    cout<<ans<<endl;

    
}   
