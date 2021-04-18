#include <iostream>
#include <bits/stdc++.h>

using namespace std;







int main(){
   int t; cin>>t;
 
   while(t--){
       int n; cin>>n;
       string s; cin>>s;
       string res ="";
       for(int i=0;i<2*n;i+=2){
           res+=s[i];
       }
       cout<<res<<endl;
   
       

   }
}

