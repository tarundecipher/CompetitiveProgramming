#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,a,b; cin>>n>>a>>b;
    int area = a*b;
    int seal[n];
    pair<int,int> dim[n];
    for(int i=0;i<n;i++){
       int x,y; cin>>x>>y;
       seal[i] = x*y;
       dim[i] = {x,y};
    }
    int ma =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // cout<<dim[i].first+dim[j].first<<endl;
            if(seal[i]+seal[j]<=area){
                if(dim[i].first+dim[j].first<=a || dim[i].second+dim[j].second<=b){
                    if(dim[i].first<=a && dim[j].first<=a && dim[i].second<=b && dim[j].second<=b){
                        ma = max(ma,seal[i]+seal[j]);
                    }
                }
                if(dim[i].first+dim[j].second<=a || dim[i].second+dim[j].first<=b){
                    if(dim[i].first<=a && dim[j].second<=a && dim[i].second<=b && dim[j].first<=b){
                        ma = max(ma,seal[i]+seal[j]);
                    }
                }
                if(dim[i].second+dim[j].first<=a || dim[i].first +dim[j].second<=b){
                    if(dim[i].second<=a && dim[j].first<=a && dim[i].first<=b && dim[j].second<=b){
                        ma = max(ma,seal[i]+seal[j]);
                    }
                }
                if(dim[i].second+dim[j].second<=a || dim[i].first +dim[j].first<=b){
                    if(dim[i].second<=a && dim[j].second<=a && dim[i].first<=b && dim[j].first<=b){
                        ma = max(ma,seal[i]+seal[j]);
                    }
                }
                
            }
        }
    }
    cout<<ma<<endl;


    

}   
