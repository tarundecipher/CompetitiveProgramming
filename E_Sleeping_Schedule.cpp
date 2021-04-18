#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int memo[2001][2001];

int clc(int a[],int h,int l,int r,int curr,int k,int n){
    if(k>=n){
        return 0;
    }
    if(curr<=2000 && k<=2000){
    if(memo[curr][k]!=-1){
        return memo[curr][k];
    }
    }
    int a1=0; int a2=0;
    int t1 = (curr+a[k])%h;
    int t2 = (curr+a[k]-1)%h;
    if(t1>=l && t1<=r){
        a1 = 1+clc(a,h,l,r,t1,k+1,n);
    }
    else{
        a1 = clc(a,h,l,r,t1,k+1,n);
    }
    if(t2>=l && t2<=r){
        a2 = 1+clc(a,h,l,r,t2,k+1,n);
    }
    else{
        a2 = clc(a,h,l,r,t2,k+1,n);
    }
    if(curr<=2000 && k<=2000){
    memo[curr][k] = max(a1,a2);
    }
    return max(a1,a2);
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,h,l,r; cin>>n>>h>>l>>r;
    int a[n];
    memset(memo,-1,sizeof(memo));
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<clc(a,h,l,r,0,0,n);
    
}   
