#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int ans= INT_MAX;
void clc(int n,int a[],int j,int target){
    if(j>=11){
        if(target>=n){
        ans = min(ans,target);    
        }
        
        return;
    }

    clc(n,a,j+1,target+a[j]);
    clc(n,a,j+1,target);



}




int main(){
    int q; cin>>q;
    while(q--){
        int n; cin>>n;
        int a[11];
      

        for(int i=0;i<=10;i++){
            int temp = pow(3,i);
           
            a[i] = temp;
        } 
        ans = INT_MAX;
        clc(n,a,0,0);
       
        cout<<ans<<endl;
      
        
        
    }



}   