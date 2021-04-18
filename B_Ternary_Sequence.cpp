#include <iostream>
#include <bits/stdc++.h>

using namespace std;







int main(){
   int t; cin>>t;
 
   while(t--){
       int x1,y1,z1; cin>>x1>>y1>>z1;
       int x2,y2,z2; cin>>x2>>y2>>z2;
       int n = x1+y1+z1;
       int sum =0;
       if(z1>=y2){
           sum = y2*2;
           y1 = y1-x2;
           if(y1>0){
           sum = sum - y1*2;
           }
       }
       else{
           sum = z1*2;
           y1 = y1 - (y2-z1);
           y1 = y1-x2;
           if(y1>0){
           sum = sum - y1*2;
           }
       }
       cout<<sum<<endl;
       
       

      


   }
}

