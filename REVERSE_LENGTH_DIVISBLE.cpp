#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;





int main(){
  
        ll n; cin>>n;
        int digits=0;
        string s = to_string(n);
        digits = s.length();
        bool cond = true;
        for(int i=1;i<=digits;i++){
           string temp = s.substr(0,i);
           ll n1 = stoi(temp);
         
            if(n1%(digits-i+1)!=0){
                cond = false;
                break;
            }
        }       
     
        if(cond==true){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
  
       
    
}   