#include <iostream>
#include <bits/stdc++.h>
using namespace std;




int main(){
    int n; cin>>n;
    int a[n]; int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    int t=0; bool cond = true;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            t =i;
            cond = false;
            break;
        }
    }
    int t2;
    if(cond == false){
    for(int i=0;i<n;i++){
        if(a[t]==b[i]){
            t2 = i;
            break;
        }
    }
    }
   reverse(a+t,a+t2+1);
   cond =true;
   for(int i=0;i<n;i++){
       if(a[i]!=b[i]){
           cond = false;
           break;
       }
   }
    // cout<<t<<t2<<endl;
    if(cond==true){
        cout<<"yes"<<endl;
        cout<<t+1<<" "<<t2+1<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}