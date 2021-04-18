#include <bits/stdc++.h>
#define ll long long int
using namespace std;





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int len = s.length();
        sort(s.begin(),s.end());
        stack<char> st;
        int freq[26];
        memset(freq,0,sizeof(freq));
        for(int i=0;i<len;i++){
            st.push(s[i]);
            freq[s[i]-'a']++;
        }
        char ans[n];
        bool cond = false;
        while(cond==false){
            cond = true;
            vector<int> index;
        for(int i=0;i<n;i++){
            
            if(a[i]==0){
                a[i] = -100;
                cond = false;
                index.push_back(i);
            }
           
           
        }
         char re;
            if(!st.empty()){
            
            re = st.top(); st.pop();
            
            while(!st.empty() && freq[re-'a']<index.size()){
                re = st.top(); st.pop();
                
            }
             freq[re-'a'] =0;
            // cout<<re<<endl;
            
            if(cond==false){
            for(auto i:index){
                ans[i] = re;
               
            }
            for(auto i:index){
                for(int j=0;j<n;j++){
                
                    a[j] = a[j] - abs(j-i);
                    
                }
            }
            }
            }
        }
        
        for(auto i:ans){
            cout<<i;
        }cout<<endl;
        
       

    }
    
    
}   
