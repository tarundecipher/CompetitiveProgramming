#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int mp[200000][2];

int clc(int a[],int n,int j,int cond){
    if(mp[j][cond]!=-1){
        return mp[j][cond];
    }
    if(j>=n){
        return 0;
    }
    
    int a1 =INT_MAX,a2  = INT_MAX;
    if(cond==1){
        cond = 0;
        a2 = clc(a,n,j+2,cond);
        a1 = clc(a,n,j+1,cond);
        
        
        
    }
    else{
        
        cond = 1;
        if(j<n){
        a1 = a[j] + clc(a,n,j+1,cond);
        }
        
        if(j+1<n){
        a2 = a[j]+a[j+1] + clc(a,n,j+2,cond);
        }
    }
    if(cond ==1 ){
        cond =0;
    }
    else{
        cond =1;
    }
    mp[j][cond] = min(a1,a2);
    return min(a1,a2);
}



int main(){
    int t; cin>>t;
    while(t--){
        memset(mp,-1,sizeof(mp));
       int n; cin>>n;
       
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
        
       
        cout<<clc(a,n,0,0)<<endl;
        
    
    }
}   



