#include <bits/stdc++.h>
#define ll long long int
using namespace std;







int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin>>n>>m;
    vector<int> a;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        a.push_back(temp);
    }
    vector<int> ans;
    pair<int,int> b[m];
    for(int i=0;i<m;i++){
        int t1,t2;
        cin>>t1>>t2;
        b[i] = {t1,t2};
    }
    int res =INT_MIN;
    for(int i=1;i<=n;i++){
         int diff[n];    memset(diff,0,sizeof(diff));
             diff[0] = a[0];
            for(int i=1;i<n;i++){
                diff[i] = a[i] - a[i-1];
            }

            vector<int> ind;
            for(int j=0;j<m;j++){
                if(b[j].first<=i && b[j].second>=i){
                    continue;
                }
                else{
                    ind.push_back(j+1);
                    diff[b[j].first-1]+=-1;
                    if(b[j].second<=n-1){
                        diff[b[j].second]-=-1;
                    }

                }

            }
         
             int ma = diff[0]; int mi = diff[0];
             int temp3 = diff[0];
            for(int i=1;i<n;i++){
                
                mi = min(mi,temp3+diff[i]);
                ma = max(ma,temp3+diff[i]);
                temp3 = temp3+diff[i];

            }
           
          

            if(res<ma-mi){
                res = ma-mi;
                ans=  ind;
            }   


    }
    cout<<res<<endl;
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<" ";
    }cout<<endl;

    
}   
