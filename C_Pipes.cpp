#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool clc(string a[]){
   bool cond = false;
   for(int i=0;i<a[0].length();i++){
       if(a[cond][i]>='3'){
           if(a[!cond][i]>='3'){
               cond = !cond;
           }
           else{
               return 0;
           }
       }
   }
   return cond;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int q; cin>>q;
    while(q--){
        int n; cin>>n;
        string a[2];
        for(int i=0;i<2;i++){
            cin>>a[i];
        }
        if(clc(a)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    

}   