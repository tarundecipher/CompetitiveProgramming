#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool check(int b[]){
    int no=0; 
    for(int i=0;i<4;i++){
        if(b[i]%2!=0){
            no++;
            // cout<<b[i]<<"b"<<endl;
        }
    }
    if(no>1){
        return false;
    }
    else{
        return true;
    }
}


int main(){
   int t; cin>>t;

   while(t--){
     int b[4];  cin>>b[0]>>b[1]>>b[2]>>b[3];
     bool cond;
     int no =0; int zeros =0;
     for(int i=0;i<3;i++){
         if(b[i]%2!=0){
             no++;
         }
         if(b[i]==0){
             zeros++;
         }
     }
     if(no==0){
         cond = true;
     }
     else if(no==1){
         if(b[3]%2==0){
             cond = true;
         }
         else{
             cond = false;
         }
     }
     else if(no==2){
          if(b[3]%2==0){
             cond = false;
         }
         else if(zeros>0){
             cond = false;
         }
         else{
             cond = true;
         }
     }
     else if(no==3){
         cond = true;
         
     }




     if(cond==false){
         cout<<"No"<<endl;
     }
     else{
         cout<<"Yes"<<endl;
     }
     
     


   }
}

