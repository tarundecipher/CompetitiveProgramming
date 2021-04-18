#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int ans=INT_MAX; 
void clc(string s,int count){
     if(s.length()==0){
         return;
     }
   
    cout<<s<<endl;
    if(s[0]!='0'){
        
        int t=  stoi(s);
        int root = sqrt(t);
        if(root*root==t){
            ans = min(ans,count);
            
        }

    }
    int len = s.length();
    for(int i=0;i<len;i++){
        string temp = s.substr(0,i) + s.substr(i+1,len);
       
        clc(temp,count+1);

    }

}


int main(){
    
    int n; cin>>n;
    string n1 = to_string(n);
    clc(n1,0);
    if(ans==INT_MAX){
        cout<<-1<<endl;
    }
    else{
    cout<<ans<<endl;
    }
    
}   