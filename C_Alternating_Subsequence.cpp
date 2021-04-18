#include <iostream>
#include <bits/stdc++.h>
using namespace std;




int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        long long int sum=0; long long int ma=a[0];
        for(int i=0;i<n;i++){
            if(i!=n-1){
            if(a[i]>=0 && a[i+1]>=0){
                ma = max(ma,a[i+1]);
            }
            else if(a[i]<0 && a[i+1]<0){
                ma = max(ma,a[i+1]);
            }
            else{
                
                sum+=ma;
                ma = a[i+1];
                
            }
            }
            else{
                sum+=ma;
                ma = a[i+1];
            }
        }
        cout<<sum<<endl;



    }

        
}