#include <iostream>
#include <bits/stdc++.h>

using namespace std;







int main(){
   int t; cin>>t;
 
   while(t--){
       int n; cin>>n;
       
       for(int i=0;i<n;i++){
           int a,b;
           cin>>a>>b;
       }

       int ans = n;
        while(true){
            if(n/2>=3){
                ans = ans + n/2;
                n = n/2;
            }
            else{
                break;
            }
        }
        
        cout<<ans<<endl;

   }
}

