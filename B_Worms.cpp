#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   int n; cin>>n; int a[n];
   int prefix[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
       
   }
    prefix[0]  = a[0];
   for(int i=1;i<n;i++){
       prefix[i] = prefix[i-1] +a[i];
       
   }
    int m; cin>>m; int b[m];
    for(int i=0;i<m;i++){
       cin>>b[i];
       
   }
   for(int i=0;i<m;i++){
       
       auto i1 = lower_bound(prefix,prefix+n,b[i]);
       cout<<i1-prefix+1<<endl;
       
   }
   
   

}