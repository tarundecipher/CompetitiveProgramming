#include <iostream>
#include <bits/stdc++.h>

using namespace std;






int main(){
   long long int t; cin>>t;
  
   while(t--){
       long long int n; cin>>n;
       long long int a[n];
       for(long long int i=0;i<n;i++){
           cin>>a[i];
       }
       
       long long int a1 = a[0]; long long int a2 = a[1];
       long long int a3 = a[n-1];
       if(a1+a2<=a3){
           cout<<1<<" "<<2<<" "<<n<<endl;
       }
       else{
           cout<<-1<<endl;
       }

   }
}

