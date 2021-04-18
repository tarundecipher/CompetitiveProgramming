#include <iostream>
#include <bits/stdc++.h>

using namespace std;

unordered_map <int,int> zeroed;

void dfs(vector <int> v[],vector <int> &visited,int k,int &node,int b[],int d[],int a[],int &days){
    if(visited[k]){
        return;
    }
    visited[k] = 1;

    
    b[k]-= min(a[node],b[k]);
    if(binary_search(v[k].begin(),v[k].end(),node)){
        auto it = lower_bound(v[k].begin(),v[k].end(),node);
           
                v[k].erase(it);
    }


            if(b[k]==0 && !zeroed[k]){
                d[k] = days;
                zeroed[k]++;
            }

    for(auto x:v[k]){
        dfs(v,visited,x,node,b,d,a,days);
    }
}


//-----------------------------------------------------------------------------------------------

int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t; cin>>t;

   while(t--){
     int n; cin>>n;
     vector <int> v[n];
     for(int i=0;i<n-1;i++){
         int a,b; cin>>a>>b;
         v[a-1].push_back(b-1); v[b-1].push_back(a-1);
     }
     for(int i=0;i<n;i++){
         sort(v[i].begin(),v[i].end());
     }
     int p[n],a[n],b[n];
     for(int i=0;i<n;i++){
         int t; cin>>t; t--;
         p[i]=t;
     }
      for(int i=0;i<n;i++){
         cin>>a[i];
     }
      for(int i=0;i<n;i++){
         cin>>b[i];
     }
//------------------------------------------------------------------------------------------------
    int d[n]; int days=1; 
    zeroed.clear();

     int node1 = p[0];
        
          b[node1]-= min(a[node1],b[node1]);
         
           
            if(b[node1]==0 && !zeroed[node1]){
                d[node1] = days;
                zeroed[node1]++;
            }
            else if(b[node1]>0){
               
                d[node1]  =-1;
                zeroed[node1]++;
            }

        for(int i=1;i<n;i++){
            int k  = p[i];

             b[k]-= min(a[node1],b[k]);
            if(binary_search(v[k].begin(),v[k].end(),node1)){
            auto it = lower_bound(v[k].begin(),v[k].end(),node1);
           
                v[k].erase(it);
    }


            if(b[k]==0 && !zeroed[k]){
                d[k] = days;
                zeroed[k]++;
            }
        }



    days++;

    for(int i=1;i<n;i++){
        int node = p[i];
        
          b[node]-= min(a[node],b[node]);
         
           
            if(b[node]==0 && !zeroed[node]){
                d[node] = days;
                zeroed[node]++;
            }
            else if(b[node]>0){
               
                d[node]  =-1;
                zeroed[node]++;
            }
        vector <int> visited(n,0);
        if(v[node].size()>0){
            dfs(v,visited,node,node,b,d,a,days);
        }
        days++;
    }

    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;



   }
}

