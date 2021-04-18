#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
   int t; cin>>t;
   double pi = 3.14159265358979323846;
   while(t--){
       int n; cin>>n;
       
       double ans = (1/tan(pi/(2*n)));
       cout<<fixed;
       cout<<setprecision(9)<<ans<<endl;

   }
    
}   