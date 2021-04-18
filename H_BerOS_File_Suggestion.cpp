#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
   
    string a[n];
    unordered_map<string,string> par;
    unordered_map<string,int> count;
    for(int t=0;t<n;t++){
        cin>>a[t];
         unordered_map<string,int> vis;
        for(int j=0;j<a[t].length();j++){
           
            string temp = "";
            for(int k=j;k<a[t].length();k++){
                temp+=a[t][k];
                // cout<<temp<<endl;
                if(vis[temp]==0){
                    par[temp] = a[t];
                    count[temp]++;
                    vis[temp]++;
                }
            }
        }
    }
    int q; cin>>q; 
    while(q--){
        string test; cin>>test;
        if(count[test]>0){
            cout<<count[test]<<" "<<par[test]<<endl;
        }
        else{
            cout<<0<<" "<<"-"<<endl;
        }
        
       
    }
  
    

    
}   