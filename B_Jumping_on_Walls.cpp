#include <iostream>
#include <bits/stdc++.h>

using namespace std;






int main(){
    int n,k; cin>>n>>k;
    char arr[n][2];
    bool visited[n][2];
    memset(visited,false,sizeof(visited));
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
    }
    for(int i=0;i<n;i++){
        cin>>arr[i][1];
    }
    
    bool cond = false;
    queue<pair<int,pair<int,int>>> q;
    q.push({0,{0,-1}});
    while(!q.empty()){
        pair<int,pair<int,int>> temp = q.front(); q.pop();
        int area = temp.first;
        int wall = temp.second.first;
        int water = temp.second.second;
        
        if(area>n-1){
            cond = true;
            break;
        }
        if(arr[area][wall]=='X'){
            continue;
        }
        if(water>=area){
            continue;

        }
        if(visited[area][wall]==true){
            continue;
        }
        visited[area][wall] = true;
        q.push({area+1,{wall,water+1}});
        q.push({area-1,{wall,water+1}});
        q.push({area+k,{1 - wall,water+1}});
    }



    
    
    
   

    if(cond){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    

}   