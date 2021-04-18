#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   int t; cin>>t;
   
   while(t--){
       int n,m; cin>>n>>m;
       int a[n][m];
       int r[n],c[m];
       int moves1=0,moves2=0;
       int count1 =0,count2=0;
       for(int i=0;i<n;i++){
           moves1=0;
           for(int j=0;j<m;j++){
               cin>>a[i][j];
               if(a[i][j]==1){
                   moves1++;
               }
           }
           if(moves1==0){
               count1++;
           }


           
       }
       for(int j=0;j<m;j++){
           moves2=0;
           for(int i=0;i<n;i++){
                if(a[i][j]==1){
                   moves2++;
               }
           }
           if(moves2==0){
               count2++;
           }
        }
        
        int ans = min(count1,count2);
        // cout<<ans<<endl;
        if(ans%2==0){
            cout<<"Vivek"<<endl;
        }
        else{
            cout<<"Ashish"<<endl;
        }


   }
}