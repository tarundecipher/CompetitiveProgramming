#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j] =4;
            }
        }
        int N = 1000;
        bool prime[N];
        memset(prime,false,sizeof(prime));

        for(int i=2;i<N;i++){
            if(prime[i]==false){

                for(int j=i*i;j<N;j+=i){
                    prime[j] = true;
                }
            }
        }

        int res = 4*(n-1);
        int x;
        for(int i=res+2;i<N;i++){
            if(prime[i]==false){
                
                x = i;
                if(prime[x-res]){
                break;
                }
            }
        }
        
        x = x-res;

        for(int i=0;i<n-1;i++){
            a[n-1][i] = x;
            a[i][n-1] = x;
        }

        res = x*(n-1);
        
        for(int i=res+2;i<N;i++){
            if(prime[i]==false){
                
                x = i;
                if(prime[x-res]){
                break;
                }
            }
        }
        x = x-res;
        a[n-1][n-1] =x;

        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }cout<<endl;
        }
    // cout<<'a';


    }
    
    
}   
