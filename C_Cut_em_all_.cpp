#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int dfs(vector<int> v[],int k,bool visited[],int size[]){
    if(visited[k]){
        return 0;
    }
    visited[k] = true;
    int a1 =1;
    for(auto i:v[k]){
        a1 += dfs(v,i,visited,size);
    }
    size[k]  = a1;
    return a1;
}


int main(){
    int n; cin>>n;
    vector<int> v[n+1];
    int size[n+1];
    if(n%2!=0){
        cout<<-1<<endl;
    }
    else{
    for(int i=0;i<n;i++){
        int t1,t2; cin>>t1>>t2;
        v[t1].push_back(t2);
        v[t2].push_back(t1);

    }
    bool visited[n+1];
    memset(visited,false,sizeof(visited));
    dfs(v,1,visited,size);
    int ans =0;
    for(int i=2;i<=n;i++){
        // if(size[i]%2==0){
            ans++;
        // }
    }
   
    cout<<size[1]<<" "<<ans<<endl;
    
    }
    
}   