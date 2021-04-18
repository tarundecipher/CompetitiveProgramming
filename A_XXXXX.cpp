#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int a[n];  int b[n]; int sum =0; int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]%x==0){
                count++;
            }
           
        }
        if(count==n){
            cout<<-1<<endl;
        }
        else{
        if(sum%x!=0){
            cout<<n<<endl;
        }
        else{
        
        for(int i=0;i<n;i++){
            b[i] = a[i]%x;

        }

        int s=0,e=n-1;
        for(s=0;s<n;s++){
            
            if(b[s]!=0){
                break;
            }
        }
        
        for(e=n-1;e>=0;e--){
            if(b[e]!=0){
                break;
            }
        }
        int ma = INT_MIN;
        // cout<<e<<" "<<s<<endl;
        ma = max(ma,n-s-1);
        ma = max(ma,e);
        
        
            cout<<ma<<endl;
        }
        }
        
        
    }
}