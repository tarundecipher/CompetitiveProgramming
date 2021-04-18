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
        int ev=0,od=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i%2==0 && a[i]%2!=0){
                ev++;
            }
            if(i%2!=0 && a[i]%2==0){
                od++;
            }
        }
        if(ev==od){
            cout<<ev<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
    
    
}   
