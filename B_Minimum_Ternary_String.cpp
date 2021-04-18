#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    string s; cin>>s;
    int n= s.length(); int count =0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            s[i] = '$';
            count++;
        }
        
    }
    string temp = "";
    for(int i=0;i<n;i++){
        if(s[i]!='$'){
        temp+=s[i];
        }
    }
    
    string temp2 = ""; string temp3(count,'1'); bool cond =false;
    for(int i=0;i<temp.length();i++){
        if(temp[i]=='2'){
            cond = true;
            temp2 = temp.substr(0,i);
            temp2+=temp3;
            temp2+=temp.substr(i,temp.length());
            break;
        }
        
    }
    if(cond==false){
       
            temp2 = temp+temp3;
        
        
    }
    cout<<temp2<<endl;
  
    
}   