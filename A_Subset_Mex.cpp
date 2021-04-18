#include <iostream>
#include <bits/stdc++.h>

using namespace std;






int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; 
        int a[n]; int ma = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ma = max(ma,a[i]);
        }
        sort(a,a+n);
        int freq[101];
        memset(freq,0,sizeof(freq));
        for(int i=0;i<n;i++){
            freq[a[i]]++;
        }
        vector <pair<int,int>> v;
        for(int i=0;i<=100;i++){
            
            
            if(freq[i]==0){
                
                v.push_back({i,freq[i]});
                
            
                break;
            }
        }
        for(int i=0;i<=100;i++){
           
            if(freq[i]<=1){
                
                v.push_back({i,freq[i]});
             
               
                break;
            }
        }
   

        
        
           
            cout<<v[0].first+v[1].first<<endl;
           
        
        



    }
}   