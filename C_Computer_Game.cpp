#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin>>t;
    while(t--){
        ll k,n,a,b; cin>>k>>n>>a>>b;
        ll x = b*n;
        if(x>=k){
            cout<<-1<<endl;
        }
        else{
            ll l = 0; ll r = n;
            ll ans;
            while(l<=r){
                ll m = l + (r-l)/2;
                if(a*m+b*(n-m)<k){
                    ans = m;
                    l = m+1;
                }
                else{
                    r = m-1;
                }
            }
            cout<<ans<<endl;
        }

    }
    
}
