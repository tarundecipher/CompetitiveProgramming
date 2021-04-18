#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
  ll t; cin>>t;
  while(t--){
  ll n,k; cin>>n>>k;
  ll a[n];
  for(ll i=0;i<n;i++){
      cin>>a[i];
  }
  ll ma  = 1;
  map <ll,ll> freq;
  ll ma2 = 0;
  ll ma3 = k;
 ll cnt =0;
  for(ll i=0;i<n;i++){
    if(a[i]%k!=0){
      freq[k-(a[i]%k)]++;
    }
    else{
        cnt++;
    }
   

  }

  for(auto i:freq){
      if(i.second>=ma){
          ma = i.second;
          ma2 = max(i.first,ma2);
      }
  }
  
  ll ans = (k*(ma-1)+ma2)+1;
 if(cnt==n){
     cout<<0<<endl;
 }
 else{
  cout<<ans<<endl;
 }
  }


    
}   