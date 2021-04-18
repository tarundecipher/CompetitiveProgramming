#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    int k; cin>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int p1 = 0; int p2 = 0;
    int ma = INT_MIN;
    while(p1<n && p2<n){
        
        while(a[p2]-a[p1]>5 && p1<=p2){
            p1++;
        }
        ma = max(ma,p2-p1+1);
        // cout<<p1<<" "<<p2<<endl;
        if(p2<n){
        p2++;
        }
    }
    cout<<ma+k-1<<endl;

    

  




  
    
    
}   
