#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector <map <int,int>> v1;
bool cond = false;
void clc(string s,int l,int i,map <int,int> v,int n){
    if(cond==true){
        return;
    }
    if(i==l){
        v1.push_back(v);
        cond =true;
        return;
    }

    if(s[i]=='1'){
            if(i+n<l){
            v[i+n]=1;
            clc(s,l,i+1,v,n);
    }
        
        if(i-n>=0){
            v[i-n]=1;
            clc(s,l,i+1,v,n);
        }
    }
    else{
       if(v[i-n]==1 || v[i+n]==1){
           return;
       }
       else{
           clc(s,l,i+1,v,n);
       }
       
    }

}




int main(){
   int t; cin>>t;
 
   while(t--){
       v1.clear();
       cond = false;
       string s; cin>>s;
       int n; cin>>n;
       int l = s.length();
       map <int,int> v;

       for(int i=0;i<l;i++){
           v[i] =0;
       }

       clc(s,l,0,v,n);
      
       if(v1.size()>0){
       for(int i=0;i<l;i++){
           cout<<v1[0][i];
       }cout<<endl;
       }
       else{
           cout<<-1<<endl;
       }

   }
}

