#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int v1=0,v0=0,vq=0;
    bool cond = true;
    for(int i=0;i<k;i++){
        set<char> st;
        for(int j=i;j<n;j+=k){
            
            st.insert(s[j]);
            
        }
        if(st.size()>=3){
            cond =false;
            break;
        }
        else if(st.size()==2){
            bool one=false,zero=false,ques=false;
            for(auto j:st){
                if(j=='1'){
                    one = true;
                }
                if(j=='0'){
                    zero= true;
                }
                if(j=='?'){
                    ques = true;
                }
                
            }
            if(ques==true){
                if(zero==true){
                    v0++;
                }
                else{
                    v1++;
                }
              
            }
            else{
                cond = false;
                break;
            }
        }
        else if(st.size()==1){
            
            if(*st.begin()=='1'){
                v1++;
            }
            else if (*st.begin()=='0'){
                v0++;
            }
            else{
                vq++;
            }
        }
        
    }
    if(cond==false){
        cout<<"NO"<<endl;
    }
    else{
        
       if(max(v1,v0)<=k/2){

           cout<<"YES"<<endl;
        }
        else{
            
            
            cout<<"NO"<<endl;
        }
    }
 
    
    }
}   