#include <bits/stdc++.h>
#define ll long long int
using namespace std;


map<pair<int,int>,int> memo;

int clc(string &s,int i,int j,int n){
    if(j>=n || i>=n){
        return 0;
    }
    if(memo[{i,j}]){
        return memo[{i,j}];
    }
    int temp=0;
    for(int k=i;k<=j;k++){
        temp+=s[k]-'0';
    }
    int a1=0,a2=0,a3=0;
    if(temp%3==0){
        a1 = 1 + clc(s,j+1,j+1,n);
    }
    else{
    a2 = clc(s,i,j+1,n);
    if(i+1<=j){
    a3=  clc(s,i+1,j,n);
    }
    }
    memo[{i,j}]=  max(a1,max(a2,a3));
    return max(a1,max(a2,a3));
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin>>s;
    cout<<clc(s,0,0,s.length());
}   
