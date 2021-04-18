#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        map<int,int> mp;
        map<int,int> ans;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int res = 0;
        for(auto i:mp){
            if(ans[i.second]){
                for(int j=0;j<=i.second;j++){
                    if(!ans[i.second-j]){
                        res+=i.second-j;
                         ans[i.second-j]++;
                        break;
                    }
                }
               
            }
            else{
                res+=i.second;
                ans[i.second]++;
            }
        }
        cout<<res<<endl;

    }
    
}
