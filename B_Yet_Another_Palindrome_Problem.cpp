#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int memo[5001][5001];
int clc(int a[],int i,int j,int n){
    if(i>=j){
        if(i==j && a[i]==a[j]){
            return 1;
        }
        return 0;
    }
    if(memo[i][j]!=-1){
        return memo[i][j];
    }
    int a1=0; int a2 = 0; int a3=0;
    if(a[i]==a[j] && i!=j){
        a1 = 2 + clc(a,i+1,j-1,n);
    }
    else{
        a2 = clc(a,i+1,j,n);
        a3 = clc(a,i,j-1,n);
    }
    memo[i][j] = max(a1,max(a2,a3));

    return max(a1,max(a2,a3));
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    
    while(t--){
        int n; cin>>n;
        int a[n];
        memset(memo,-1,sizeof(memo));
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans = clc(a,0,n-1,n);
        if(ans>=3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    

}   
