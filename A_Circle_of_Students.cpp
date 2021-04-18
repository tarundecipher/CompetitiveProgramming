#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool cond1 = true;
        bool cond2 = true;
        int x = a[0];
        int p = x+1;
        if(n >1 && a[1]==x+1 && x!=n){
            for(int i=1;i<n;i++){
                if(a[i]!=p){
                    cond1 = false;
                    break;
                }
                // cout<<p<<" "<<a[i]<<endl;
                p++;
                if(p>n){
                    p = 1;
                }
                
            }
        }
        else if(n >1 && a[1]==1 && x==n){
            p=1;
            for(int i=1;i<n;i++){
                if(a[i]!=p){
                    cond1 = false;
                    break;
                }
                // cout<<p<<" "<<a[i]<<endl;
                p++;
                if(p>n){
                    p = 1;
                }
                
            }
        }
        else if(n >1 && a[n-1]==1 && x==n){
            p=1;
             for(int i=n-1;i>0;i--){
                if(a[i]!=p){
                    cond2 = false;
                    break;
                }
                p++;
                if(p>n){
                    p = 1;
                }
            }
        }
        else{
            for(int i=n-1;i>0;i--){
                if(a[i]!=p){
                    cond2 = false;
                    break;
                }
                p++;
                if(p>n){
                    p = 1;
                }
            }
        }
        
        if(cond1 && cond2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}
