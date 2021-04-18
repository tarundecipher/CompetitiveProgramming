#include <iostream>
#include <bits/stdc++.h>
using namespace std;




int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        char s[n]; 
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        stack <char> st;
        
        for(int i=0;i<n;i++){
            if(s[i]!='$'){
            st.push(s[i]);
            }
            while(st.size()>0 && st.top()=='1' && s[i+1]=='0'){
               
                    
            if(st.top()=='1' && s[i+1]=='0'){
                 if(i+2<n){
                    if(s[i+2]=='0'){
                        s[i+1] = '$';
                    }
                    else{
                        st.pop();
                    }
                }
                else{
                st.pop();
                }
            }
            }
        }
        vector <char> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        for(auto i:v){
            cout<<i;
        }

        cout<<endl;
       
    }

        
}