#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<int,int>> ans;
    vector<pair<int,int>> ans2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='.'){
                ans.push_back({i,j});
                break;
            }
        }
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(a[i][j]=='.'){
                ans2.push_back({i,j});
                break;
            }
        }
    }
    if(ans.size()<n && ans2.size()<n){
        cout<<-1<<endl;
    }
    else{
        if(ans.size()>=n){
        for(auto i:ans){
            cout<<i.first+1<<" "<<i.second+1<<endl;
        }
        }
        else if(ans2.size()>=n){
            for(auto i:ans2){
            cout<<i.first+1<<" "<<i.second+1<<endl;
        }
        }
    }
    
    
}   