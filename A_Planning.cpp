#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


bool cond(pair<int,int> p1,pair<int,int> p2){
    if(p1.first <p2.first){
        return false;
    }
    return true;
}





int main(){
    int n,k; cin>>n>>k;
    vector<pair<int,int>> c;
    int a[n];
    map<int,int> key;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(!key[a[i]]){
        if(i-k<0){
            key[a[i]]= 0;
        }
        else{
            key[a[i]] = i-k;
        }
        }
        c.push_back({a[i],i});
    }
    sort(c.begin(),c.end(),cond);
    vector<pair<int,int>> order(n,{-1,-1});
    vector<int> sear;
    for(int i=0;i<n;i++){
        sear.push_back(i);
    }
    
    for(int i=0;i<n;i++){
        int val = key[c[i].first];
     
            auto it = lower_bound(sear.begin(),sear.end(),val);
            int j = *it;
            sear.erase(it);
                order[j].first = c[i].first;
                order[j].second = c[i].second;
                
         
    }
    int ans= 0;
    vector<int> key2(n,0);
    for(int i=0;i<n;i++){
        ans+=(i+1+k-(order[i].second+1))*order[i].first;
        key2[order[i].second] = i+k;
    }   
   
    cout<<ans<<endl;
    for(int i=0;i<n;i++){
        cout<<key2[i]+1<<" ";
    }cout<<endl;

  

    
}   