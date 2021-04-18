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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count =0;
    int i1=0,i2=n-1;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            i1 = i;
            break;
        }
    }
     for(int i=n-1;i>0;i--){
        if(a[i-1]>a[i]){
            i2 = i;
            break;
        }
    }
    for(int i=i1;i<=i2;i++){
        if(a[i]==i+1){
            count++;
        }
    }
    
    if(count>0 && count!=n){
        cout<<2<<endl;
    }
    else if(count==n){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
    }
    

    
    
}   