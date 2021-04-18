#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


void dfs(bool visited[],int &count,int k,vector<pair<int,bool>> v[],bool cond){
    if(visited[k]){
        return;
    }
    visited[k] = true;
    if(cond==true){
        count++;
    }
    
    for(auto i:v[k]){
        dfs(visited,count,i.first,v,i.second);
    }
}



int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<pair<int,bool>> v[n+1];
        for(int i=0;i<n-1;i++){
            int t1,t2; cin>>t1>>t2;
            v[t1].push_back({t2,true});
            v[t2].push_back({t1,false});

        }
        int ma = INT_MIN;
        for(int i=1;i<=n;i++){
            bool visited[n+1];
            memset(visited,false,sizeof(visited));
            int count =0;
            dfs(visited,count,i,v,true);
            ma = max(ma,count);
        }
        cout<<(n-1)-(ma-1)<<endl;
    }
    
}   