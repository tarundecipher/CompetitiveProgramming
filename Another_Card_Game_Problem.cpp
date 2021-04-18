#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int pc,pr; cin>>pc>>pr;
        if(pc<=9 && pr<=9){//rick wins
            cout<<1<<" "<<1<<endl;
        }
        else{
        if(pc>pr){
            cout<<1<<" ";
            int count = 0;
            count = pr/9;
            if(pr%9!=0){
                count++;
            }
            cout<<count<<endl;
        }
        else if(pc<pr){
            cout<<0<<" ";
            int count = 0;
            count = pc/9;
            if(pc%9!=0){
                count++;
            }
            cout<<count<<endl;
        }
        else if(pc==pr){
            cout<<1<<" ";
            int count = 0;
            count = pr/9;
            if(pr%9!=0){
                count++;
            }
            cout<<count<<endl;
        }
        }
        
    }
}