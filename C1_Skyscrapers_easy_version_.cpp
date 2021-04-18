#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll RMQUtil(ll *st, ll ss, ll se, ll qs, ll qe, ll index)  
{  
    // If segment of this node is a part  
    // of given range, then return  
    // the min of the segment  
    if (qs <= ss && qe >= se)  
        return st[index];  
  
    // If segment of this node 
    // is outside the given range  
    if (se < qs || ss > qe)  
        return INT_MAX;  
  
    // If a part of this segment 
    // overlaps with the given range  
    ll mid = ss+(se-ss)/2;
    return min(RMQUtil(st, ss, mid, qs, qe, 2*index+1),  
                RMQUtil(st, mid+1, se, qs, qe, 2*index+2));  
}  
ll RMQ(ll *st, ll n, ll qs, ll qe)  
{  
    // Check for erroneous input values  
    if (qs < 0 || qe > n-1 || qs > qe)  
    {  
        cout<<"Invalid Input";  
        return -1;  
    }  
  
    return RMQUtil(st, 0, n-1, qs, qe, 0);  
}  
ll constructstu(vector<ll>arr,ll ss,ll se,ll *st,ll si){
    if(ss==se){
        st[si] = arr[ss];
        return arr[ss];
    }
    ll mid = ss+ (se-ss)/2;
    st[si] = min(constructstu(arr,ss,mid,st,2*si+1), constructstu(arr,mid+1,se,st,2*si+2));
    return st[si];
}
ll *constructst(vector<ll> arr,ll n){
    ll x = (ll)ceil(log2(n));
    ll max_size = 2*(ll)pow(2,x)-1;
    ll *st = new ll[max_size];
    constructstu(arr,0,n-1,st,0);
    return st;
}

vector<ll> ans;
ll ann = INT_MIN;

void clc(vector<ll> b,ll l,ll r,ll n,ll sum,ll *st){
    if(l>=r){
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=b[i];
        }
        if(sum>ann){
            ann=sum;
            ans=b;
        }
        return;
    }
 
    ll mi = INT_MAX;
    ll ele = RMQ(st,n,l,r);
    vector<ll> c=b;
    ll index =0;
    for(ll i=l;i<=n;i++){
        if(ele==c[i]){
            index =i;
            break;
        }
        c[i] = ele;
    }
    clc(c,index+1,r,n,sum+(index-l+1)*c[index],st);
    for(ll i=r;i>=0;i--){
         if(ele==b[i]){
             index = i;
            break;
        }
        b[i] = ele;
    }
    clc(b,l,index-1,n,sum+(r-index+1)*b[index],st);
    
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n; cin>>n;
    vector<ll> a;
    for(ll i=0;i<n;i++){
        ll temp; cin>>temp;
        a.push_back(temp);
        
    }
    ll *st = constructst(a,n);
    clc(a,0,n-1,n,0,st);
    
    for(auto i:ans){
        cout<<i<<" ";
    }cout<<endl;


    

}   
