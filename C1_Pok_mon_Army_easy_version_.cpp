#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
   ll t; cin>>t;
   while(t--){
       ll n,q; cin>>n>>q;
       ll a[n+1];

       for(ll i=0;i<n;i++){
           cin>>a[i];    //took the array as input
       }
    
       a[n] = INT_MIN; //to add the last element present in the array
       ll ma_so_far = INT_MIN; ll sum_till_now = 0;
       bool cond = true;
       for(ll i=0;i<n;i++){
           
           if((a[i]>a[i+1]) && cond==true){ //if cond==true next element is to be added
               sum_till_now+=a[i];   //local maxima
               cond = false;
           }
           else if(a[i]<a[i+1] && cond==false){ //if cond==true next element is to be subtracted
               sum_till_now-=a[i]; //local minima
               cond = true;
           }
          
           ma_so_far = max(ma_so_far,sum_till_now); //keep track of maximum so far
        
       }
       cout<<ma_so_far<<endl; //prll max so far
   }
  


}   