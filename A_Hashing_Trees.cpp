#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int h; cin>>h;
    int a[h+1];
    
    bool cond = false;
    for(int i=0;i<h+1;i++){
        cin>>a[i];
        
        
    }
    int index=0;
    for( int i=0;i<h+1;i++){
        if(i+1<h+1 && a[i]>1 && a[i+1]>1){
            cond = true;
            index=i;
            break;
        }   
        
    }
    vector <int> v;
    int j=0;
  

    int len = v.size();
    vector <int> v2;
    if(cond){
        cout<<"ambiguous"<<endl;
          for(int i=0;i<h+1;i++){
        for(int p=0;p<a[i];p++){
            v.push_back(j);
            }
        j++;
    }
    j=0;
    index++;
    bool cond1 = false;
    for(int i=0;i<h+1;i++){
         for(int p=0;p<a[i];p++){
              if(index == j && cond1 ==false){
                  cond1 = true;
                  v2.push_back(j+1);
              } 
              else{
            v2.push_back(j);
            }
         }
         
        j++;

    }
       
        for(auto i: v){
            cout<<i<<" ";
        } cout<<endl;
        for(auto i:v2){
            cout<<i<<" ";
        }cout<<endl;
        
    }
    else{
        cout<<"perfect"<<endl;
    }
    
}   