#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int l,r; cin>>l>>r;
        int diff = r-l+1;
        if(l<diff){
            cout<<-1<<endl;
        }else{
            cout<<r<<endl;
        }
    }
    
}   
