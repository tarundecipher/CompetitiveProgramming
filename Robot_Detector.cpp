#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
   
    int r,c; cin>>r>>c;
    string s ="";
    
        bool cond=false; bool first = true;
        for(int j=0;j<r;j++){
            if(cond==false){
                cond = true;
            if(j==r-1){
                 s+="U";
                 if(first!=true){
            for(int i=0;i<c-2;i++){
            
                    s+="R";
            
                    }
                 }
                 else{
                     for(int i=0;i<c-1;i++){
            
                    s+="R";
            
                    }
                 }
            }else{
            
            if(first==true){
                first = false;
            s+="U";
            for(int i=0;i<c;i++){
            
                    s+="R";
            
                    }
            }
            else{
                     s+="U";
            for(int i=0;i<c-1;i++){
            
                    s+="R";
            
                    }
            }
            }
            }
            
            else{
                cond = false;
                if(j==r-1){
                     s+="U";
            for(int i=0;i<c-2;i++){
            
                    s+="L";
            
                    }
                }
                    else{
                
                s+="U";
                for(int i=0;i<c-1;i++){
            
                 s+="L";
            
                     }
                }
            }

        }
        cout<<s<<endl;
        cout<<s.length()<<endl;
    
}   