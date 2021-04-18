#include <bits/stdc++.h>
#define ll long long int
using namespace std;







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        int l1,r1,l2,r2; cin>>l1>>r1>>l2>>r2;
        if(l1!=r2){
            cout<<l1<<" "<<r2<<endl;
        }
        else{
            cout<<r1<<" "<<l2<<endl;
        }
    }
    
    
}   
