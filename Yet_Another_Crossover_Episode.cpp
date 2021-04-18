#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        if(n==2){
            cout<<3<<endl;
            cout<<3<<" "<<3<<" "<<2<<endl;
        }
        else if(n==1){
            cout<<2<<endl;
            cout<<3<<" "<<2<<endl;
        }
        else if(n==0){
            cout<<1<<endl;
            cout<<n+1<<endl;
        }
        else if(n==3){
            cout<<4<<endl;
             cout<<3<<" "<<3<<" "<<3<<" "<<2<<endl;
        }
        else{
        if(n%2==0){
            ll a1 = n/2;
            ll a2 = a1+1;
            ll res = a1-1;
            
            ll num = n/res;
            vector<ll> ans;
            if(n%res!=0){
                for(ll i=0;i<n%res;i++){
                    ans.push_back(2);
                }
            }
            for(ll i=0;i<num;i++){
                ans.push_back(a2);
            }
            ans.push_back(a1);
             cout<<ans.size()<<endl;
            for(auto i:ans){
                cout<<i<<" ";
            }cout<<endl;

        }
        else{
            n--;
            ll a1 = n/2;
            ll a2 = a1+1;
            ll res = a1-1;
            
            ll num = n/res;
            vector<ll> ans;
            ans.push_back(2);
            if(n%res!=0){
                for(ll i=0;i<n%res;i++){
                    ans.push_back(2);
                }
            }
            for(ll i=0;i<num;i++){
                ans.push_back(a2);
            }
            ans.push_back(a1);
            cout<<ans.size()<<endl;
            for(auto i:ans){
                cout<<i<<" ";
            }cout<<endl;
        }
        }
    }
    
}   
