#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,k ;cin>>n>>k;
        int a[n];
        int mi = INT_MAX; int ma = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            ma = max(ma,a[i]);
            mi = min(mi,a[i]);
        }
        int x = mi+k;
        if(abs(ma-x)<=k){
            cout<<x<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        

    }
    
}
