#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// int b = 0;

// void calc(long long int a[],long long int n,int i,vector <int> v){
    
//     if(i==n){
//         for(auto j:v){
//             if(j==2){
//                 b++;
//             }
//         }
//         // cout<<endl;

//         return;
//     }
//    calc(a,n,i+1,v);
//    v.push_back(a[i]);
//    calc(a,n,i+1,v);
//    return;




// }




int main(){
   int t; cin>>t;
   long long int M = 1000000007;
   while(t--){
       long long int n; cin>>n;
       long long int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
      
        long long int ans = 1;
           for(int j=0;j<n-1;j++){
                ans = (ans%M*2)%M;
             }
        int inv=500000004;
       

       for(int i=1;i<=n;i++){
          
           cout<<ans<<" ";
           ans = ((ans%M)*(inv%M))%M;
           
       }
       cout<<endl;
    // vector <int> v;
    // calc(a,n,0,v);
    //  cout<<b<<endl;
       
       

   }
}

