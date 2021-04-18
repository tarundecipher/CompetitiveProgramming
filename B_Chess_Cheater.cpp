#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        char s[n];
        for(ll i=0;i<n;i++){
            cin>>s[i];
        }
        ll p1 = 0; ll p2 = 0;
        map<char,ll> mp;
        ll i1=-1,i2=-1; ll ma = INT_MIN;
        while(p1<n && p2<n){
            mp[s[p1]]++;
            while(mp['L']>k && p2<=p1){
                mp[s[p2]]--;
                p2++;
            }
            if(mp['L']<=k){
            if(ma<max(ma,p1-p2+1)){
                i2 = p1; i1 = p2;
                ma  = p1-p2+1;
            }
            }
            p1++;
        }
        ll c1=0;
        if(i1!=-1){
            for(ll i=i1;i<=i2;i++){
                if(s[i]=='L'){
                    c1++;
                }
                s[i]='W';
            }
            

        }
        
        ll count =0;
        for(ll i=n-1;i>0;i--){
            if(s[i] =='W' && s[i-1]==s[i]){
                count+=2;
            }
            else if(s[i]=='W'){
                count++;
            }
        }
        if(s[0]=='W'){
            count++;
        }
        for(ll i=0;i<n;i++){
            cout<<s[i]<<" ";
        }cout<<endl;
        
      
        cout<<count<<endl;

    }

}   