#include <iostream>
#include <bits/stdc++.h>

using namespace std;






int main(){
   int t; cin>>t;
   while(t--){
       int n; cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       map <int,int> mp;
       for(int i=0;i<n;i++){
           mp[a[i]]++;
       }
        map <int,int> mp2;
       for(auto i:mp){
           mp2[i.second]++;
       }
    
       int mi = INT_MAX;
       int ans = INT_MIN;
       for(auto i:mp2){
           if(ans<i.second){
               ans = max(ans,i.second);
               mi = i.first;
           }
       }
       cout<<mi<<endl;

   }
}

