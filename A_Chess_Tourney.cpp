#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
   int n; cin>>n;
   n = 2*n;
   int a[n];
    
   for(int i=0;i<n;i++){
       cin>>a[i];
       
   }
   sort(a,a+n);
   if(a[n/2]==a[(n/2)-1]){
       cout<<"NO"<<endl;
   }
   else{
       cout<<"YES"<<endl;
   }

   
    
}   