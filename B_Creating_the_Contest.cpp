#include <bits/stdc++.h>
#define ll long long int
using namespace std;






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int p1 =0; int p2=1;
        int ma = 1;
        while(p1<n && p2<n){

            if(a[p2]>2*a[p2-1]){
                p1 = p2;
                p2 = p1;
            }
            ma = max(ma,p2-p1+1);
            p2++;

        }
        cout<<ma<<endl;

    
    
    
}   
