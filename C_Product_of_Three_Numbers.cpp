#include <iostream>
#include <bits/stdc++.h>
using namespace std;







int main(){
    int t; cin>>t;
    while(t--){
       
       int n; cin>>n;
       int a=0,b=0,c=0;
       for(int i=2;i*i<n;i++){
           if(n%i==0){
               a = i;
               n = n/i;
               break;
           }
       }

       for(int i=2;i*i<n;i++){
           if(n%i==0 && i!=a){
               b = i;
               n = n/i;
               break;
           }
       }

       c = n;
      
       if(a!=0 &&b!=0 &&c!=0 && c!=a && c!=b && c!=1){
           cout<<"YES"<<endl;
           cout<<a<<" "<<b<<" "<<c<<endl;
       }
       else{
           cout<<"NO"<<endl;
        //    cout<<a<<" "<<b<<" "<<c<<endl;
       }
    
    }
}