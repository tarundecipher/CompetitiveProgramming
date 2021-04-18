#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    map<int,int> mp;
    int ma = INT_MIN;
    int l;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = mp[a[i]-1]+1;
        if(ma<mp[a[i]]){
            ma = mp[a[i]];
            l = a[i];
        }

    }
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(a[i]==l){
            ans.push_back(i+1);
            l--;
        }
    }
    cout<<ma<<endl;
    reverse(ans.begin(),ans.end());
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    
}
