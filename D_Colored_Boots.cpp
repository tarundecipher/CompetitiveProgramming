#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n; 
    char s[n];
    vector<int> q;
    for(int i=0;i<n;i++){
        char temp; cin>>temp;
        s[i] = temp;
        if(temp=='?'){
            q.push_back(i);
        }
    }
    
    map<char,vector<int>> t;
    int visited[n];
    memset(visited,0,sizeof(visited));
    for(int i=0;i<n;i++){
        char temp; cin>>temp;
        t[temp].push_back(i);
        
    }
    
    
  
    vector<pair<int,int>> v;
    
    for(int i=0;i<n;i++){
        char temp = s[i];
        if(temp!='?'){
            if(t[temp].size()>0){
                v.push_back({i,t[temp][t[temp].size()-1]});
                visited[t[temp][t[temp].size()-1]] = 1;
                t[temp].pop_back();
            }
            else if(t['?'].size()>0){
                 v.push_back({i,t['?'][t['?'].size()-1]});
                visited[t['?'][t['?'].size()-1]] = 1;
                t['?'].pop_back();
            }
        }
    }
    vector<int> pos;
    for(int i= 0;i<n;i++){
        if(visited[i]==0){
            pos.push_back(i);
        }
    }
    for(int i=0;i<q.size();i++){
        v.push_back({q[i],pos[i]});
    }
    cout<<v.size()<<endl;
    for(auto i:v){
        cout<<i.first+1<<" "<<i.second+1<<endl;
    }
    
  

    
}   