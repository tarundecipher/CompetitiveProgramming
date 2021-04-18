#include <bits/stdc++.h>
#define ll long long int
using namespace std;


void prime(int n,vector<int> &ans){
    ans.push_back(1);
    if(n%2==0){
       ans.push_back(2);
        while(n%2==0){
            n=n/2;
        }
    }
    for(int i=3;i*i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
        
            while(n%i==0){
                n = n/i;
            }
        }
    }
    if(n>2){
        ans.push_back(n);
       
    }
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s; cin>>s;
        vector<int> ans;
        prime(k,ans);
        int freq[26];
        memset(freq,0,sizeof(freq));
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        sort(freq,freq+26);
        int res = INT_MIN;
        for(auto i:ans){
            int mi = INT_MAX;
            if(i<=26){
            for(int j=25;j>25-i;j--){
                mi = min(mi,freq[j]);
            }
            // cout<<mi<<endl;
             res= max(mi*i,res);
            }
           
        }
        
        cout<<res<<endl;


    }
    
    
}   
