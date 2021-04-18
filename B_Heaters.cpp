#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,r; cin>>n>>r;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pos = 0;
    bool cond = false;
    bool cond2 = false;
    int gap = r-1;
    int count = 0;
    while(pos<n){
        
        if(cond==false){
            cond = true;
            pos = gap;
             bool condi = false;
            for(int i=pos;i>=pos-gap;i--){
                if(i<n && a[i]==1){
                    pos = i;
                  condi = true;
                    count++;
                    break;
                    
                }
               
            }
            if(condi==false){
                cond2 = true;
                break;
            }
        

        }
        else{
            pos+=2*gap+1;
            int pos2 = pos;
            bool condi = false;
            // cout<<pos<<endl;
            for(int i=pos;i>pos-(2*gap+1);i--){
                if(i<n && a[i]==1){
                    pos = i;
                     condi = true;
                     count++;
                    break;
                    
                }
                
              
            }
            if(condi ==false ){
              
               
                cond2 = true;
                break;
            }
        }
        // cout<<pos<<endl;
        if(pos+gap>=n-1){
            break;
        }
       
    }
    // cout<<pos<<endl;
    if(cond2 || pos+gap<n-1){
        cout<<-1<<endl;
    }
    else{
        cout<<count<<endl;
    }
    
    
    
}   