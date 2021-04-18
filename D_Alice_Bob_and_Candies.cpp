#include <iostream>
#include <bits/stdc++.h>

using namespace std;




int main(){
   int t; cin>>t;
   while(t--){
       int n; cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       int left =0; int right = n-1;
       int alice=0; int bob =0;
       bool cond = false; int turns = 0;
       int at =0; int bt =0;
       while(left<=right){
           turns++;
           if(cond==false){
               //alice turn;
               cond = true;
               alice =0;
               while(alice<=bob && left<=right){
                   alice+=a[left];
                   at+=a[left];
                   left++;
               }
               
           }
           else{
               //bob turn
               cond = false;
               bob = 0;
               while(bob<=alice && left<=right){
                   bob+=a[right];
                   bt+=a[right];
                   right--;
               }
           }

       }
        cout<<turns<<" "<<at<<" "<<bt<<endl;
   }
  


}   