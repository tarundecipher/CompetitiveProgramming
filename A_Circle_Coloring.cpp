#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
    int n; cin>>n;

    int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    int ans[n];
    int j= 1;
    for(int i=0;i<n;i++){
        if(i==0 ){
        ans[i] = a[i];
        }
        else if(i==n-1){
           if(ans[0]==a[i]){
                if(ans[i-1]!=b[i]){
                    ans[i] = b[i];
                }
                else{
                    ans[i] = c[i];
                }
            }
            else{
                if(ans[i-1]!=a[i]){
                ans[i] = a[i];
                }
                else if(ans[i-1]!=c[i] && ans[0]!=c[i]){
                    ans[i] =c[i];
                }
                else{
                    ans[i] = b[i];
                }
            }
        }
        else{
          



               if(ans[i-1]==a[i]){
                ans[i] = b[i];
            }
            else{
                ans[i] = a[i];
            }

        }


        

    }
    for(auto i:ans){
        cout<<i<<" ";
    }cout<<endl;
    }
    
}   