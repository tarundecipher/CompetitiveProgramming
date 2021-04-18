#include <bits/stdc++.h>
#define ll long long int
using namespace std;





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s; cin>>s; int res =0;
        for(auto i:s){
            if(i=='1'){
                res++;
            }
        }
        int num[n];
        int sum=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                sum++;
            }
            num[i] = sum;
        }
        
        vector<int> v; int c =1;
        for(int i=0;i<n;i++){
           if(s[i]=='0'){
               int l = max(i-k,0);
               int r = min(i+k,n-1);
               int c=0;
               if(l==0){
                   c = num[r];
               }
               else{
                   c = num[r] - num[l-1];
               }
               if(c==0){
                   
                   s[i]='1';
                   i+=k;
               }
           }
        //    cout<<s<<endl;
        }

        int ans=0;
        for(auto i:s){
            if(i=='1'){
                ans++;
            }
        }
        
        cout<<ans-res<<endl;
        

    }
    
    
}   
