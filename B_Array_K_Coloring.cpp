#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool ispresent(int num,int c,vector<int> arr[]){
    bool cond = false;
    for(auto i:arr[c]){
        if(i==num){
            cond = true;
            break;
        }
    }
    return cond;
}



int main(){
    int n,k; cin>>n>>k;
    int a[n];
    int count[5001];
    int color[n];
    vector<int> arr[k+1];
    memset(color,-1,sizeof(color));
    memset(count,0,sizeof(count));
    int ma = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        count[a[i]]++;
        ma = max(count[a[i]],ma);
    }
    
    if(ma>k){
        cout<<"NO"<<endl;
    }
    else{
        
        int c = 1; int i=0;
        while(i<n){
            if(c>k){
                c = 1;
            }
            if(!ispresent(a[i],c,arr)){
                color[i] =c;
                arr[c].push_back(a[i]);
                i++;
            }
            
            c++;
            
        }


        cout<<"YES"<<endl;
        for(auto i:color){
        cout<<i<<" ";
    }cout<<endl;
    }


    
    
    

}   