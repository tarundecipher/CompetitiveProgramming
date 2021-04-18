#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;










int main(){
  ll n,m; cin>>n>>m;
  ll a[n];
  map<ll,ll> mp;
  for(ll i=0;i<n;i++){
      cin>>a[i];
  }
  for(ll j=0;j<m;j++){
      ll temp; cin>>temp;
      temp--;
      mp[temp]++;
  }
  ll polls =0;
  for(ll i=0;i<n;i++){
      if(!mp[i]){
          polls+=a[i];
      }
  }
  
  
    vector<ll> v;
    for(auto i:mp){
        if(i.second>0){
        v.push_back(a[i.first]);
        }
    }   
    
    sort(v.begin(),v.end(),greater<ll> ());
    for(ll i=0;i<v.size();i++){
        if(polls<v[i]){
            polls+=v[i];
        }
        else{
            polls += polls;
        }
    }
    cout<<polls<<endl;



}   