#include <iostream>
#include <bits/stdc++.h>
#define ll long long int

using namespace std;




int main(){
   
       ll l1,r1,l2,r2,k; cin>>l1>>r1>>l2>>r2>>k;
       ll l,r;
       l = max(l1,l2);
       r = min(r1,r2);
       ll d = r-l+1;
       if(d>0){
       if(k>=l && k<=r){
           cout<<d-1<<endl;
       }
       else{
           cout<<d<<endl;
       }
       }
       else{
           cout<<0<<endl;
       }
       

    
}   