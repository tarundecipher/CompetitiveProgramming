#include <iostream>
#include <bits/stdc++.h>

using namespace std;






int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int di; cin>>di;
        int a[n];
        for(int i=n-1;i>=0;i--){
            a[i] = di%10;
            di = di/10;
        }
        int counte =0;
        int counto = 0;
        if(n%2==0){
            for(int i=1;i<n;i= i+2){
                if(a[i]%2==0){
                    counte++;
                }
            }
            if(counte>0){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }

        }
        else{
            for(int i=0;i<n;i= i+2){
               
                if(a[i]%2!=0){
                    counto++;
                }
            }
            if(counto>0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        



    }
}   