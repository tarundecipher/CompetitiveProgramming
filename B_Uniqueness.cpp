#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    vector<int> a; unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        a.push_back(temp);
    }
   
    mp.clear();
    for(int i=0;i<n;i++){
       
        a.push_back(a[i]);
        
    }
    int n1 = a.size();
    
    int p1=0;int p2=0;
    mp.clear();
    int ma = INT_MIN;
    while(p1<n1 && p2<n1){
        
        mp[a[p2]]++;
        
        while(mp[a[p2]]>1){
            mp[a[p1]]--;p1++;
        }
        if(p1==0){
        ma = max(ma,p2-p1+1);
        }
        else if(p2==n-1){
        ma = max(ma,p2-p1+1);
        }
        else if(p1<=n-1 && p2>=n-1){
            
        ma = max(ma,p2-p1+1);
        }
        if(p1>n-1){
            break;
        }
        // cout<<p1<<p2<<endl;
        p2++;
    }
    
   
    

  
    cout<<n-ma<<endl;

    

}   
