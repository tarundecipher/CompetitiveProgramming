#include <iostream>
#include <bits/stdc++.h>
#define ll long long int

using namespace std;




int main(){
   
       ll n; cin>>n;
       ll a[n];
       ll b[n];
       for(ll i=0;i<n;i++){
           cin>>a[i];
       }
        for(ll i=0;i<n;i++){
           cin>>b[i];
       }
       sort(a,a+n);
       sort(b,b+n);
       stack <ll> a1,b1;
       for(auto i:a){
           a1.push(i);
       }
       for(auto i:b){
           b1.push(i);
       }
       ll sa=0,sb = 0; bool cond = false;
       while(!a1.empty() || !b1.empty()){
           ll ta=0,tb=0;
           if(!a1.empty()){
           ta = a1.top();
           }
           if(!b1.empty()){
            tb = b1.top();
           }
           if(cond ==false){
               cond = true;
           if(ta<tb){
               b1.pop();
           }
           else{
               sa+=ta;
               a1.pop();
           }
           }
           else{
               cond = false;
               if(tb<ta){
                   a1.pop();
               }
               else{
                   sb += tb;
                   b1.pop();
               }
           }

       }
       
       cout<<sa-sb<<endl;

       

    
}   