#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
     int t; cin>>t;
     while(t--){
         int n,T; cin>>n>>T;
         int a[n];
         map <int,int> key;
         map <int,vector<int>> ele;
         for(int i=0;i<n;i++){
             cin>>a[i];
             ele[a[i]].push_back(i);
         }
         int col[n];
         memset(col,-1,sizeof(col));
         for(int i=0;i<n;i++){
             if(col[i]==-1){
                 col[i] =0;
                 int node = abs(T-a[i]);
                 if(ele[node].size()>0 && a[i]!=node){
                     for(auto x:ele[node]){
                         if(i!=x && col[x]==-1){
                         col[x] = 1;
                         }
                     }
                 }
                 else{
                    int len = ele[a[i]].size();
                    for(int j=0;j<len/2;j++){
                        int index = ele[a[i]][j];
                        col[index] =1;
                    }
                     for(int j=len/2;j<len;j++){
                        int index = ele[a[i]][j];
                        col[index] =0;
                    }
                    
                     
                  

                 }
             }
         }
         for(auto i:col){
             cout<<i<<" ";
         }cout<<endl;

     }
    
}   