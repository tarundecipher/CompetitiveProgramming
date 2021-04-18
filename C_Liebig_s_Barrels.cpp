#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    
    ll n,k,l; cin>>n>>k>>l;
    ll m = n*k;
    ll a[m];
    for(ll i=0;i<m;i++){
        cin>>a[i];
    }
    bool cond = true;
    sort(a,a+m);
    ll sum =0;
    int index = 0;
   for(int i=0;i<m;i++){
       if(a[i]-a[0]<=l){
           index = i;
       }
       else{
           break;
       }
   }
   if(index+1<n){
       cond= false;
   }
   int back = n-1;
   int i1 = index;
    
    if(cond==true){
        
        for(int back = m-1;back-(k-1)>i1;back-=(k-1)){
            sum+=a[index];
            index--;
           
        

        }
       
       for(int i=0;i<index+1;i+=k){
           sum+=a[i];
       }
        
         
        cout<<sum<<endl;
    }
    else{
        cout<<0<<endl;
    }

    
}   