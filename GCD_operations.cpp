#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    int t; cin>>t;
    while(t--){
     int n; cin>>n;
     int a[n];  bool cond = true;
     for(int i=0;i<n;i++){
         cin>>a[i];
         
     }
     for(int i=0;i<n;i++){
         if(a[i]!=i+1){
         if(__gcd(a[i],i+1)!=a[i]){
            
            cond = false;
            break;
         }
         }
     }
     if(cond==true){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
     
    }
    
}   