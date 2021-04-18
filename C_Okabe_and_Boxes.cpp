#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(int a[],int i){
    bool cond = true;
    for(int j=0;j<i-1;j++){
        if(a[j]<a[j+1]){
            cond = false;
            break;
        }
    }
    return cond;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int i=0;
    int a[n];
    memset(a,0,sizeof(a));
    int t = 2*n;
    int count =0; bool cond = true;
    int term =1;
    while(t--){
        string s; int num; 
        cin>>s; 
        if(s=="add"){
           
            cin>>num;
            a[i] = num;
            
            cond = true;
            i++;
            
        }
        else{
           
           
            if(i>0){
            if(a[i-1]!=term){
               
                i=0;
                count++;
                
                
             
               
            }
            else{
                 i--; 
            }
            }
            term++;
              
            }
            
          
        
           
             
        
    
    }
    cout<<count<<endl;
    
    
    

    
}   