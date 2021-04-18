#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;





ll solve(ll q1,map<ll,ll> &mp){
    
    return mp[q1];
}




int main(){
   ll t; cin>>t;
   map<ll,ll> mp;
   while(t--){
       char q; cin>>q;
       string q1; cin>>q1;
       if(q=='+'){
           for(ll i=0;i<q1.length();i++){
                int temp = q1[i]-'0';
                if(temp%2==0){
                    q1[i] = '0';
                }
                else{
                    q1[i] = '1';
                }
        }
        
        ll q2 = stoll(q1);
           mp[q2]++;
       }
       else if(q=='-'){
            for(ll i=0;i<q1.length();i++){
                int temp = q1[i]-'0';
                if(temp%2==0){
                    q1[i] = '0';
                }
                else{
                    q1[i] = '1';
                }
        }
         
        ll q2 = stoll(q1);
           mp[q2]--;
       }
       else{
          ll q2 = stoll(q1);
           cout<<solve(q2,mp)<<endl;
       }

   }


}   