#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int getMaxu(int *st,int ss,int se,int qs,int qe,int si){
    if(qs<=ss && qe>=se){
        return st[si];
    }
    if(qs>se || qe<ss){
        return INT_MIN;
    }
    int mid = ss + (se-ss)/2;
    return max(getMaxu(st,ss,mid,qs,qe,2*si+1) , getMaxu(st,mid+1,se,qs,qe,2*si+2));
}

int getMax(int *st,int n,int qs,int qe){

    return getMaxu(st,0,n-1,qs,qe,0);
}

int constructstum(int *st,int arr[],int ss,int se,int si){

    if(ss==se){
        st[si] = arr[ss];
        return st[si];
    }
    int mid = ss + (se-ss)/2;
    st[si] =  max(constructstum(st,arr,ss,mid,2*si+1) , constructstum(st,arr,mid+1,se,2*si+2));
    return st[si];
}



int *constructstm(int arr[],int n)
{
    int x = (int)ceil(log2(n));
    int max_size = 2*(int)pow(2,x)-1;
    int *st = new int[max_size];
    constructstum(st,arr,0,n-1,0);
    return st;
}

int getMinu(int *st,int ss,int se,int qs,int qe,int si){
    if(qs<=ss && qe>=se){
        return st[si];
    }
    if(qs>se || qe<ss){
        return INT_MAX;
    }
    int mid = ss + (se-ss)/2;
    return min(getMinu(st,ss,mid,qs,qe,2*si+1) , getMinu(st,mid+1,se,qs,qe,2*si+2));
}

int getMin(int *st,int n,int qs,int qe){

    return getMinu(st,0,n-1,qs,qe,0);
}

int constructstu(int *st,int arr[],int ss,int se,int si){

    if(ss==se){
        st[si] = arr[ss];
        return st[si];
    }
    int mid = ss + (se-ss)/2;
    st[si]  = min(constructstu(st,arr,ss,mid,2*si+1) , constructstu(st,arr,mid+1,se,2*si+2));
    return st[si];
}



int *constructst(int arr[],int n)
{
    int x = (int)ceil(log2(n));
    int max_size = 2*(int)pow(2,x)-1;
    int *st = new int[max_size];
    constructstu(st,arr,0,n-1,0);
    return st;
}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
        int n; cin>>n;
        int l[n],r[n];
    
        for(int i=0;i<n;i++){
            cin>>l[i]; cin>>r[i];
            
        }

        int *stl = constructstm(l,n);
        int *str = constructst(r,n);
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            int temp;
            if(i!=0){
                temp = min(getMin(str,n,0,i-1),getMin(str,n,i+1,n-1));
            }
            else if(i==n-1){
                temp = getMin(str,n,0,n-2);
            }
            else{
                temp = getMin(str,n,i+1,n-1);
            }
            if(i!=0){
                temp-= max(getMax(stl,n,0,i-1),getMax(stl,n,i+1,n-1));
            }
             else if(i==n-1){
                temp -= getMax(str,n,0,n-2);
            }
            else{
                temp -= getMax(stl,n,i+1,n-1);
            }
            ans  = max(ans,temp);
        }

        if(ans<0){
            cout<<0<<endl;
            
        }
        else{
        cout<<ans<<endl;
        }
       
       



  }




    
    
    


