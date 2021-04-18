#include <iostream>
#include <bits/stdc++.h>

using namespace std;







int main(){
   int t; cin>>t;
 
   while(t--){
       int p,f; cin>>p>>f; 
       
       int cnts,cnta; cin>>cnts>>cnta;
       int ws,wa; cin>>ws>>wa;
       int ans =0;
       int is=0,ia=0; int ma =INT_MIN;

       for(int i=0;i<=cnts;i++){
           for(int j=0;j<=cnta;j++){
               int temp = ws*(cnts-i)+wa*(cnta-j);
               int co = cnts-i+cnta-j;
               if(temp<=p){
                   if(ma<co){
                   is = cnts - i; ia = cnta - j;
                   ma= max(co,ma);
                   
                   }

               }
           }
       }

    ans+= is+ia;
    cnts = cnts-is; cnta = cnta-ia;
    
    ma = INT_MIN; is=0; ia=0;

        for(int i=0;i<=cnts;i++){
           for(int j=0;j<=cnta;j++){
               int temp = ws*(cnts-i)+wa*(cnta-j);
                int co = cnts-i+cnta-j;
               if(temp<=f){
                   if(ma<co){
                   is = i; ia = j;
                   ma = max(co,ma);
                   
                   }

               }
           }
       }

       ans+=is+ia;
      










       cout<<ans<<endl;
          

   }
}

