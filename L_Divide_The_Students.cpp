#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ; cin>>t;
    while(t--){
    int a,b,c; cin>>a>>b>>c;
    if(a>c){
        swap(a,c);
    }
    int ans = INT_MAX;
    for(int x=0;x<=b;x++){
        int leftb = b-x;
        int final1 = a+x;
        
        for(int y= 0;y<=c;y++){
            int leftc = c-y;
            int final3 = leftc;
            int final2  = leftb+y;
            int ma = max(final2,max(final1,final3));
            ans = min(ma,ans);
            // cout<<x<<y<<endl;
        }
    }
    for(int x=0;x<=b;x++){
        int leftb = b-x;
        int final1 = a+x;
        for(int y=0;y<=leftb;y++){
            int final2 = leftb-y;
            int final3 = c+y;
            int ma = max(final1,max(final2,final3));
            ans = min(ma,ans);
        }
       
    }
    
    cout<<ans<<endl;
    }
}   