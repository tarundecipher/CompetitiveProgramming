#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;






int main(){
    ll t; cin>>t;
    while(t--){
        ll n,s; cin>>n>>s;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll len =0; ll temp =s; ll index =0; ll ma =0;
        for(int i=0;i<n;i++){
            if(ma<a[i]){
                ma = max(a[i],ma);
                index = i+1;
            }
            if(temp-a[i]>=0){
                len++;
                temp-=a[i];
            }
            else {
                break;
            }
            
        }
        if(len==n){
            cout<<0<<endl;
        }
        else{
            cout<<index<<endl;
        }
        

        
    }
}   