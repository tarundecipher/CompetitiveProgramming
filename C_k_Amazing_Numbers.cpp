#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int k=1;k<=n;k++){
        map <int,int> ele; int mi = INT_MAX;
        map <int,int> pres;
        for(int i=0;i<k;i++){
            if(!ele[a[i]]){
            ele[a[i]]++;
            
           
            }
        }
        bool cond = false;
        for(int i=k;i<n;i++){
            ele[a[i-k]]--;
            ele[a[i]]++;
           
        }
        for(auto j:ele){
            if(j.second>=1){
                mi = j.first;
                cond=true;
                break;
            }
            // cout<<j.first<<" "<<j.second<<endl;
        }
        // cout<<endl;
        if(cond==false){
            cout<<-1<<" ";
        }
        else{
            cout<<mi<<" ";
        }
    }
    cout<<endl;
    }
    
}   