#include <iostream>
#include <bits/stdc++.h>

using namespace std;




int main(){
   int t; cin>>t;
   while(t--){
       int n,k; cin>>n>>k;
       string s; cin>>s; bool cond =true;
       int n1=0,n0=0,nq=0;
       for(int i=0;i<k;i++){
            if(s[i]=='1'){
                
               n1++;
           }
           else if(s[i]=='0'){
              
               n0++;
           }
           else{
              
               nq++;
           }
           
       }

       if(n1+nq==n0 || n0+nq==n1){
               if(n1+nq==n0){
                   n1+=nq;
                   nq=0;
               }
               else{
                   n0+=nq;
                   n1=0;

               }
               
           }
           
       
      
       int count =0;

       for(int i=k;i<n;i++){
       
           if(s[i]=='1'){
               n1++;
           }
           if(s[i]=='0'){
               n0++;
           }
           else if(s[i]=='?'){
               
               nq++;
           }
           if(s[i-k]=='1'){
               n1--;
           }
           else if(s[i-k]=='0'){
               n0--;
           }
           else if(s[i]=='?'){
               
              
               nq--;
           }
           
           if(n1+nq==n0 || n0+nq==n1){
               if(n1+nq==n0){
                   n1+=nq;
                   nq=0;
               }
               else{
                   n0+=nq;
                   n1=0;

               }
               
           }
           else{
               cond = false; 
               break;
           }
       }
       
       if(cond ==false){
           cout<<"NO"<<endl;
       }
       else{
           cout<<"YES"<<endl;
       }

      
      
        

   }
}

