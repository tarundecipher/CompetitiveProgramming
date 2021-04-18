#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin>>s;
    ll n = s.length();
    
    ll freq[26];
    ll ma = INT_MIN;
    ll a[26][26];
    memset(a,0,sizeof(a));
    memset(freq,0,sizeof(freq));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<26;j++){
            a[s[i]-'a'][j] +=freq[j];
        }
        freq[s[i]-'a']++;
    }
    for(ll i=0;i<26;i++){
        for(ll j=0;j<26;j++){
            // if(i!=j){
            ma = max(ma,a[i][j]);
            // }
        }
    }
    for(ll i=0;i<26;i++){
        ma = max(ma,freq[i]);
    }

    cout<<ma<<endl;


    
    
}   