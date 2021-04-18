#include <iostream>
#include <bits/stdc++.h>
using namespace std;





int main(){
    long long int t; cin>>t;
    while(t--){
        long long int n; cin>>n;
        vector <long long int> a;
        for(long long int i=0;i<n;i++){
            long long int temp; cin>>temp;
            a.push_back(temp);
        }
        map <int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        if(mp.size()>1){
            cout<<1<<endl;
        }
        else{
            cout<<n<<endl;
        }

    }


}