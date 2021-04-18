#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void dfs(ll k,vector<ll> v[],bool visited[],ll &ans,bool cond){
    if(visited[k]){
        return;
    }
    visited[k] =true;
    if(cond==true){
    ans = ans*2;
    }
    for(auto i:v[k]){
        dfs(i,v,visited,ans,true);
    }
}

int main(){
   ll n,m; cin>>n>>m;
   vector <ll> v[n+1];
   for(ll i=0;i<m;i++){
       ll t1,t2; cin>>t1>>t2;
       v[t1].push_back(t2);
       v[t2].push_back(t1);
   }
   ll node; ll ma = INT_MIN;
   bool visited[n+1];
   ll ans = 1;
   memset(visited,false,sizeof(visited));
   for(ll i=1;i<=n;i++){
       if(v[i].size()>0){
      dfs(i,v,visited,ans,false);
       }
   }
   cout<<ans<<endl;


}   