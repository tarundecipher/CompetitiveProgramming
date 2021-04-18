#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int prime(int n,int &pr){
    map<int,int> mp;
    int n1 = n;
    
    if(n%2==0){
        pr*=2;
        while(n%2==0){
            n = n/2;
            mp[2]++;
        }
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            pr*=i;
            while(n%i==0){
                n = n/i;
                mp[i]++;
            }
        }
    }
    if(n>2){
        pr*=n;
        mp[n]++;

    }
    if(pr==n1){

        return 0;

    }
    else{

    
    int ma = INT_MIN; bool cond = true;
    for(auto i:mp){
        // cout<<i.first<<" "<<i.second<<endl;
        if(__builtin_popcount(i.second)!=1 || i.second==1){
            cond = false;
        }
        for(int j=0;j<=20;j++){
            if(pow(2,j)>=i.second){
                // cout<<j<<endl;
                ma = max(ma,j);
                break;
            }
        }
        // int num = ceil(sqrt(i.second));
        // ma = max(ma,num);
    }
    for(auto i:mp){
        if(pow(2,ma)!=i.second){
            cond = false;
        }
    }
    if(cond==true){
        
        return ma;
    }
    else{
        return ma+1;
    }
}
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int pr = 1;
    int ans = prime(n,pr);
    cout<<pr<<" "<<ans<<endl;

    
    
}   