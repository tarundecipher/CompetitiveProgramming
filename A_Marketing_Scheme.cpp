#include <bits/stdc++.h>
#define ll long long int
using namespace std;







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        int l,r; cin>>l>>r;
       
        r++;
        double res = (double)r/(double)2;
        if(res<=l){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
}   
