#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    int n,s; cin>>n>>s;
    int a[n];
    for(int i=0;i<n-1;i++){
        a[i]  = 1;
    }
    a[n-1]  = s-(n-1);
    
    if((a[n-1]-1)<=n-1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(auto i:a){
            cout<<i<<" ";
        }cout<<endl;
        cout<<a[n-1]-1<<endl;
    }
    
}   