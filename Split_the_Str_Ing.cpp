#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        char a = s[n-1]; bool cond =false;
        for(int i=0;i<n-1;i++){
            if(a==s[i]){
                cond = true;
                break;
            }
        }
        if(cond==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}   
