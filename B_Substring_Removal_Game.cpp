#include <iostream>
#include <bits/stdc++.h>

using namespace std;






int main(){
   long long int t; cin>>t;
  
   while(t--){
       string s; cin>>s;
       vector <int> v;
       int count =0;
       
        int n = s.length();
        if(s[n-1]=='1'){
            s+='0';
        }
       for(int i=0;i<n+1;i++){
           if(s[i]=='1'){
               count++;
           }
           else{
               v.push_back(count);
               count=0;
           }
       }
       sort(v.begin(),v.end(),greater <int>());
       int ans =0;
       for(int i=0;i<v.size();i=i+2){
           ans+=v[i];
       }
       cout<<ans<<endl;

   }
}

