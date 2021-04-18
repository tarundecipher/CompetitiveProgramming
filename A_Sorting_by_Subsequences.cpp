#include <iostream>
#include <bits/stdc++.h>

using namespace std;

 map <int,int> pos;
void dfs(map<int,vector<int>> &v,int c,int ele,bool visited[],int a[]){
    if(visited[ele]){
        return;
    }
    visited[ele] =1;
    v[c].push_back(ele);
   
    dfs(v,c,pos[a[ele]],visited,a);

}



int main(){
    int n; cin>>n;
    int a[n]; int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
   
    for(int i=0;i<n;i++){
        pos[b[i]] = i;
    }
    bool visited[n];
    map<int,vector<int>> v;
    memset(visited,false,sizeof(visited));
    int c =0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(v,c,i,visited,a);
            c++;
        }
    }

    cout<<c<<endl;
    for(int i=0;i<c;i++){
        cout<<v[i].size()<<" ";
        for(auto x:v[i]){
            cout<<x+1<<" ";
        }cout<<endl;
    }



}   