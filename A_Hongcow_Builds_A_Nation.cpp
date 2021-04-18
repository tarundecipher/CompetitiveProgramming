#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void dfs(vector<int> graph[],int k, bool visited[],map<int,int> &government,int &node,int &size){
    if(visited[k] ){
        return;
    }
    visited[k]  = true;
    if(government[k]){
        
        node = k;
     
    }
    size++;
    for(auto i:graph[k]){
        dfs(graph,i,visited,government,node,size);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,k; cin>>n>>m>>k;
    map<int,int> government;
    for(int i=0;i<k;i++){
        int temp; cin>>temp;
        government[temp]++;
    }
    vector<int> graph[n+1];
    for(int i=0;i<m;i++){
        int t1,t2; cin>>t1>>t2;
        graph[t1].push_back(t2);
        graph[t2].push_back(t1);
    }
    int count = 0; 
    bool visited[n+1];
    int without =0;
    vector<int> with;
    memset(visited,false,sizeof(visited));
    for(int i=0;i<n;i++){
      
        int node=0; int size=0;
        if(!visited[i+1]){
            dfs(graph,i+1,visited,government,node,size);
            
          
            if(node!=0){
        
            with.push_back(size);
            

        }
        else{
            without+=size;
        }
        }
        
    }
      int p = with.size();
      int index =0; int ma = INT_MIN;
    for(int i=0;i<p;i++){
        if(ma<with[i]){
            ma = with[i];
            index = i;
        }
    }
  
    for(int i=0;i<p;i++){
        if(i!=index){
        count+=with[i]*(with[i]-1)/2;
        }
    }
    without+=with[index];
    count+=without*(without-1)/2;
    
    cout<<count-m<<endl;
    
}   