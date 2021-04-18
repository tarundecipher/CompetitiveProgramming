#include <bits/stdc++.h>
#define ll long long int
using namespace std;





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int a[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[n-a[i]]++;
        a[i] = n-a[i];
    }
    bool cond = true;
    map<int,int>mp2;
    int count=1;
    for(auto i:mp){
        if(i.second%i.first!=0){
            cond = false;
        }
        mp2[i.first] = count;
        count++;
    }
    if(cond==false){
        cout<<"Impossible"<<endl;
    }
    else{
        int b[n];
        cout<<"Possible"<<endl;
        int hat =1;
        for(auto i:mp){
            int count  = i.first;

            for(int j=0;j<n;j++){
                if(a[j]==i.first && count>0){
                    b[j] = hat;
                    count--;
                }
                else if(a[j]==i.first && count<=0){
                    hat++;
                    count = i.first;
                    b[j] = hat;
                    count--;
                }
            }
            hat++;
            
        }
        for(auto i:b){
                cout<<i<<" ";
            }cout<<endl;
    }

    

}   
