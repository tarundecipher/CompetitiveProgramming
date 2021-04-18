#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a; cin>>n>>a;
    vector<int> x;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        x.push_back(temp);
        
    }

    sort(x.begin(),x.end());
    int dist =0;
    for(int i=0;i<n-1;i++){
        cout<<a<<endl;
        auto it = lower_bound(x.begin(),x.end(),a);
        auto it2 =  upper_bound(x.begin(),x.end(),a);
        int t1 = it -x.begin();
        int t2 = it2 -x.begin();
        t1--;
        
        if(abs(x[t1]-a)<abs(x[t2]-a)){
            dist+=abs(x[t1]-a);
            a = x[t1];
            x.erase(it-1);
        }
        else{
              dist+=abs(x[t2]-a);
            a = x[t2];
            x.erase(it2);

        }

    }
    cout<<dist<<endl;

    
}   