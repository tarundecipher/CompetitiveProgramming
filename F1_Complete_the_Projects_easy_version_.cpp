#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cond1(pair<int,int> a,pair<int,int> b){
    if(a.first<b.first){
        return true;
    }
    else if(a.first==b.first){
        if(a.second>b.second){
            return true;
        }
        return false;
    }
    return false;
}

bool cond2(pair<int,int> a,pair<int,int> b){
    if(a.second+a.first>b.second+b.first){
        return true;
    }
   
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,r; cin>>n>>r;
    pair<int,int> a[n];
    vector<pair<int,int>> pos;
    vector<pair<int,int>> neg;
    for(int i=0;i<n;i++){
        int t1;int t2; cin>>t1>>t2;
        a[i] = {t1,t2};
        if(t2<0){
            neg.push_back({t1,t2});
        }
        else{
            pos.push_back({t1,t2});
        }
    }
    bool cond = true;
    sort(pos.begin(),pos.end(),cond1);
    sort(neg.begin(),neg.end(),cond2);
    for(int i=0;i<pos.size();i++){
        if(r>=pos[i].first){
            r+=pos[i].second;
        }
        else{
            cond = false;
            break;
        }
    }
    if(cond==true){
    for(int i=0;i<neg.size();i++){
        // cout<<r<<" "<<neg[i].first<<" "<<neg[i].second<<endl;
        if(r>=neg[i].first){
            r+=neg[i].second;
        }
        else{
            
            cond = false;
            break;
        }
        if(r<0){
            cond= false;
            break;
        }
    }
    }
    if(cond==true){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }
    

}
