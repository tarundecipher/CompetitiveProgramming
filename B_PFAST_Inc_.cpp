#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct node{
    bool val = false;
};
void dfs(map<string,vector<string>> graph, map<string,node> &visited,string k,vector<string> &com){
    if(visited[k].val){
        return;
    }
    visited[k].val = true;
    com.push_back(k);
    for(auto i:graph[k]){
        dfs(graph,visited,i,com);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin>>n>>m;
    map<string,vector<string>> graph;
    string mem[n];
    for(int i=0;i<n;i++){
        cin>>mem[i];
    }
    
    map<string,node> visited;

    for(int i=0;i<m;i++){
        string t1,t2; cin>>t1; cin>>t2;
        graph[t1].push_back(t2);
        graph[t2].push_back(t1);
        

    }
    vector<string> ans;
    for(int i=0;i<=pow(2,n);i++){
        vector<string> com;
        map<string,int> com2;
        for(int j=0;j<n;j++){
            int temp = (1<<j);
            if((i&temp)){
                com.push_back(mem[j]);
                com2[mem[j]]++;
            //   cout<<j;
            }
            
        }
        bool condi=true;
        for(int j=0;j<com.size();j++){
            if(graph[com[j]].size()>0){
            for(auto k:graph[com[j]]){
                if(com2[k]){
                    condi =false;
                }
            }
            }
        }
        if(com.size()>ans.size()){
        if(condi==true){
            ans= com;
            
        }
        }


    }
    
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<endl;
    }


    

}   
