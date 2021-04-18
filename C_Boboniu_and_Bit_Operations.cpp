#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int cal(int a[],int b[],int i,int n,int m){
    if(i>=n){
        return 0;
    }

    int mi =INT_MAX; 

    for(int j=0;j<m;j++){
        int t = (a[i]&b[j]);
        int a2 = t | cal(a,b,i+1,n,m);
        mi = min(mi,a2);

    }

return mi;
}


int main(){
   int n,m; cin>>n>>m;
   int a[n]; int b[m]; 
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   for(int i=0;i<m;i++){
       cin>>b[i];
   }

cout<<cal(a,b,0,n,m)<<endl;
}