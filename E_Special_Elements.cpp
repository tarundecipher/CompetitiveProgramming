#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        map<int,int> special;
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map<int,int> occured;
        int count = 0;
        unordered_map <int,int> freq;
        for(int i=0;i<n;i++){
            freq[a[i]]++;
        }
        int b[n];
        partial_sum(a,a+n,b);
        for(int i=0;i<n;i++){
           
            for(int j=i+1;j<n;j++){
                int sum = 0;
                if(i==0){
                    sum = b[j];
                }
                else{
                    sum = b[j]-b[i-1];
                }
               
               
                // cout<<sum<<endl;
                if(sum<=n && !occured[sum]){
                    count+=freq[sum];
                    occured[sum]++;
                }
                if(sum>n){
                    break;
                }
               
                
            }
           
        }
        cout<<count<<endl;

    }    
   
    
    

    
}   