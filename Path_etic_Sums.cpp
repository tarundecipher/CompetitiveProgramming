#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> graph[n+1];
        for(int i=0;i<n-1;i++){
            int t1,t2; cin>>t1>>t2;
            graph[t1].push_back(t2);
            graph[t2].push_back(t1);
        }
        int num[n+1];
        queue<pair<int,int>> q;
        q.push({1,0});
        bool visited[n+1];
        memset(visited,false,sizeof(visited));
        while(!q.empty()){
            pair<int,int> temp = q.front(); q.pop();
            int dist = temp.second;
            int node = temp.first;  
            visited[node]=true;
            if(dist%2==0){
                num[node] = 1;
            }
            else{
                num[node] =2;
            }
            for(auto i:graph[node]){
                if(!visited[i]){
                q.push({i,dist+1});
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout<<num[i]<<" ";
        }cout<<endl;
    }
    
}   
