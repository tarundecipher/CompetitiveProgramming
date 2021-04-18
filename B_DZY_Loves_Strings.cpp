#include <iostream>
#include <bits/stdc++.h>

using namespace std;






int main(){
   string s; cin>>s;
   int n; cin>>n;
   int a[26];
   int ma = INT_MIN;
   for(int i=0;i<26;i++){
       cin>>a[i];
       ma = max(ma,a[i]);
   }
   

   int ans =0;
   for(int i=0;i<s.length();i++){
       ans+= (i+1)*a[s[i]-'a'];
       
   }
   int temp = s.length();
    
   for(int i=1;i<=n;i++){
    //    cout<<i+temp<<endl;
       ans+= (i+temp)*ma;
   }
   
   cout<<ans<<endl;

}

