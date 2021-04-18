#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t; cin>>t;
    while(t--){
       ll n; cin>>n;
       ll a[n];
       
       ll sume = 0; ll sumo = 0;
       for(ll i=0;i<n;i++){
           cin>>a[i];
           if(i%2==0){
               sume+=a[i];
           }
           else{
               sumo+=a[i];
           }
           
        
       }
       
       if(sume<sumo){
           for(int i=0;i<n;i++){
               if(i%2!=0){
                    cout<<a[i]<<" ";
               }
               else{
                   cout<<1<<" ";
               }
           }
       }
       else{
           for(int i=0;i<n;i++){
               if(i%2==0){
                  
                    cout<<a[i]<<" ";
               }
               else{
                   cout<<1<<" ";
               }
           }
       }
       cout<<endl;
       
       
      
      
    }
}
