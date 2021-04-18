#include <bits/stdc++.h>
#define ll long long int
using namespace std;





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        string temp="";
        for(int i=1;i<s.length()-1;i+=2){
           temp+=s[i];
        }
        cout<<s[0];
        cout<<temp;
        cout<<s[s.length()-1]<<endl;
    }
    
    
}   
