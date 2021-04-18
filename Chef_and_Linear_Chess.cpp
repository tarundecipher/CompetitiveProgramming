#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int mi = INT_MAX; int ans;
        bool cond = false;
        for(int i=0;i<n;i++){
            if((k-p[i])%p[i]==0){
                if(mi>min(mi,(k-p[i])/p[i])){
                    ans = p[i];
                    mi = min(mi,(k-p[i])/p[i]);
                }
                
                cond = true;
            }
        }
        if(cond==false){
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
        
        
    }
}