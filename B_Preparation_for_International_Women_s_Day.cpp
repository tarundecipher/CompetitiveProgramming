#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        {   
    cin>>a[i];
    a[i] = a[i]%k;
        }
    int c =0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp[k-a[i]]>0 ){
                mp[k-a[i]]--; 
                
                c++;
            }
            else if(a[i]==0 && mp[0]>0){
                mp[0]--;
                c++;
            }
            else{
                mp[a[i]]++;
            }
        }
    cout<<c*2<<endl;




  




  
    
    
}   
