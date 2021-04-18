#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;






int main(){
    int n; cin>>n;
    int a[n]; int mi = INT_MAX; int index =0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
        int l = max(abs(n-i-1),abs(i-0));
        mi = min(mi,a[i]/l);
       

    }
   
  
    cout<<mi<<endl;
}   