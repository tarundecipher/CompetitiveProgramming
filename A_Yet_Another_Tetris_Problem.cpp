#include <bits/stdc++.h>
#define ll long long int
using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int counte=0,counto=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                counte++;
            }
            else{
                counto++;
            }
        }
        if(counte==n || counto==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    

}   
