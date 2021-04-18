#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   int t; cin>>t;
   
   while(t--){
      string s; cin>>s; string s2; cin>>s2;
      int n2 = s2.length(); int n1 = s.length();
      sort(s.begin(),s.end());
      map <char,int> mp;
      for(int i=0;i<n2;i++){
          mp[s2[i]]++;

      }
      for(auto i:mp){
          int ch = i.first;
          int freq = i.second;
          auto i1 = lower_bound(s.begin(),s.end(),ch);
          int temp = i1-s.begin();
          for(int j=temp;j<temp+freq;j++){
            
                  s[j] = '$';
           
            
          }
      }
    
      
      string final;
     

      for(int j=0;j<s.length();j++){
          if(s[j]!='$'){
              final+=s[j];
          }
      }

    //   ------------------------------------------------------------------


    int len = final.length();
     string mi; 
     for(int i=0;i<len;i++){
         mi+='z';
     }     
     int pos1 = 0; int pos2 = len;
     if(binary_search(final.begin(),final.end(),s2[0])){
     auto i1 = lower_bound(final.begin(),final.end(),s2[0]);
     pos1 = i1 - final.begin();
     auto i2 = upper_bound(final.begin(),final.end(),s2[0]);
     pos2 = i2 - final.begin();
     }

     for(int i=pos1;i<=pos2;i++){
         string ans;
         ans += final.substr(0,i);
         ans+=s2;
         ans+= final.substr(i,len);
         if(mi>ans){
             mi = ans;
         }
         else{
             break;
         }
     }
     cout<<mi<<endl;
    

     
      


   }
}