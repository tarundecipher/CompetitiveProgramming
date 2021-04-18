#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
   ll n,x,y; cin>>n>>x>>y;
   ll a[n];
   for(ll i=0;i<n-1;i++){
       a[i]=1;
   }
   ll diff = y-(n-1);
   if(diff<=0){
       cout<<-1<<endl;
   }
   else{
       a[n-1] = diff;
       ll sum=0;
       sum = n-1;
       sum+=pow(diff,2);
       if(sum>=x){
           for(auto i:a){
               cout<<i<<endl;
           }
       }
       else{
           cout<<-1<<endl;
       }
   }
    
}   