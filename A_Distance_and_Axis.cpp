#include <iostream>
#include <bits/stdc++.h>

using namespace std;







int main(){
   int t; cin>>t;
 
   while(t--){
       int n,k; cin>>n>>k;
       int temp = k-n;

       if(k-n<=0){
           if((abs(k-n)%2)==0){
               cout<<0<<endl;
           }
           else{
               cout<<1<<endl;
           }
       }
       else{
           cout<<k-n<<endl;
       }
   
       

   }
}

