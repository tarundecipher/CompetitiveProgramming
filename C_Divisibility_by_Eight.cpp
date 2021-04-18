#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void clc(string num,string s,int k,int i,bool &cond){
    if(k>num.length()){
        return;

    }
    if(i==s.length()){
        cond = true;
        return;
    }
    if(s[i]==num[k]){
        clc(num,s,k+1,i+1,cond);
    }
    else{
        clc(num,s,k+1,i,cond);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string num; cin>>num;
    string div[100];
    for(int i=0;i<100;i++){
        int temp = i*8;
        div[i] = to_string(temp);
    }
    string ans;
    for(int i=0;i<100;i++){
        bool cond =false;
        clc(num,div[i],0,0,cond);
        if(cond==true){
            ans = div[i];
            break;
        }
    }
    if(ans.length()>0){
        cout<<"YES"<<endl;
        cout<<ans<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    
    
    
}   