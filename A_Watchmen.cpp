#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll clc(ll n){
    return n*(n-1)/2;
}


int main(){
   ll n; cin>>n;
   
   map<ll,ll> freqs,freqe;
   map<pair<ll,ll>,int> s;
   for(ll i=0;i<n;i++){
       ll t1,t2; cin>>t1>>t2;
       s[{t1,t2}]++;
       freqe[t2]++;
       freqs[t1]++;

   }
 
   ll ans = 0;

   for(auto i:freqe){
       if(i.second>1){
           ans+=clc(i.second);
       }
   }
   for(auto i:freqs){
       if(i.second>1){
           ans+=clc(i.second);
       }
   }
   for(auto i:s){
       if(i.second>1){
          
               ans-=clc(i.second);
           
       }
   }
   cout<<ans<<endl;
//    cout<<s.size()<<endl;
    
}   