#include <iostream>
#include <bits/stdc++.h>

using namespace std;






int main(){
   long long int t; cin>>t;
  
   while(t--){
       int n; cin>>n;
       string s; cin>>s;
       int a[n];
       for(int i=0;i<n;i++){
           a[i] = s[i] -'0';
       }
    
       int prefix[n];
       partial_sum(a,a+n,prefix);
    int count =0;
       for(int i=0;i<n;i++){
           int sum =0;
           for(int j=i;j<n;j++){
               if(i!=0){
                   sum = prefix[j] - prefix[i-1];
               }
               else{
                   sum = prefix[j];
               }
               if(sum==(j-i+1)){
                   count++;
               }
           }
       }
       cout<<count<<endl;

   }
}

