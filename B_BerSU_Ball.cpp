#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
    int n; cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b,b+n);
    int m; cin>>m;
    int g[m];
    for(int i=0;i<m;i++){
        cin>>g[i];
    }
    sort(g,g+m);
    int t1=0,t2=0;
    int result =0;
    while(t1<n || t2<m){
        int diff = b[t1]-g[t2];
        if(abs(diff)==1 || abs(diff)==0){
            result++;
            t1++; t2++;
        }
        else if(diff>1){
            t2++;
        }
        else if(diff<0){
            t1++;
        }
    }
    cout<<result<<endl;
        
}