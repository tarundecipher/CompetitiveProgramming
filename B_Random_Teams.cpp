#include <iostream>
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll pa(ll n){
    if(n==1){
        return 0;
    }
    else{
        return (n)*(n-1)/2;
    }
}


int main(){
   
       ll n,m; cin>>n>>m;
        ll ma=0,mi=0;
       ma = (n-(m-1))*(n-(m-1)-1)/2;
       int re = n%m;
       int pl = n/m;
       mi = (m-re)*pa(pl);
       mi += re*pa(pl+1);
       cout<<mi<<" "<<ma<<endl;
        


    
}   