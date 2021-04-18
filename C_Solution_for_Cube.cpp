#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n = 24;
    int a[n];
    int count = 1;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            count++;
        }
        else{
            // cout<<count<<endl;
            if(count==4){
                ans++;
            }
            count = 1;
        }
    }
    // cout<<ans<<endl;
    if(ans>=2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    

    
    
}   
