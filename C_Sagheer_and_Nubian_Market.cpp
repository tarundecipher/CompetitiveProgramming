#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int uni;

bool cond(pair<int,int> p1,pair<int,int> p2){
    if(p1.first+uni*p1.second<p2.first+uni*p2.second){
        return true;
    }
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    int s; cin>>s;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        a.push_back({temp,i+1});
        
    }
    int ans1 =0; int ans2 = 0;
    int l = 1; int r = n;
    while(l<=r){
        int mid = l + (r-l)/2;
        uni = mid;
        int k = uni;
        sort(a.begin(),a.end(),cond);
        int temp = s;
        int j=0;
        while(j<k){
            temp-=(a[j].first+k*a[j].second);
            j++;
            if(temp<0){
                break;
            }
        }
        if(temp>=0){
            ans1 = k;
            ans2 = s-temp;
            l = mid+1;
        }
        else if(temp<0){
            r = mid-1;
        }
      
        

    }
    cout<<ans1<<" "<<ans2<<endl;


}   
