#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


// map<pair<int,pair<int,int>>,int> memo;
// int clc(int s[],int n,int b,int a,int k,int per){
//     if(k>=n){
//         return 0;

//     }
//     if(memo[{k,{a,b}}]){
//         return memo[{k,{a,b}}];
//     }
//     int a1=0;int a2=0;
//     if(s[k]==1){
//         if(b>0){
//             if(a+1<=per){
//         a1 = 1+ clc(s,n,b-1,a+1,k+1,per);
//             }
//             else{
//                 a1 = 1+ clc(s,n,b-1,a,k+1,per);
//             }
//         }
//         if(a>0){

//         a2 = 1+ clc(s,n,b,a-1,k+1,per);
//         }
//     }
//     else{
//         if(b>0){
//         a1 = 1+clc(s,n,b-1,a,k+1,per);
//         }
//         if(a>0){
//         a2 = 1+ clc(s,n,b,a-1,k+1,per);
//         }
//     }
//     memo[{k,{a,b}}] = max(a1,a2);
//     return max(a1,a2);
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,b,a; cin>>n>>b>>a;
   
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int per = a;
    // cout<<clc(s,n,b,a,0,a)<<endl;
    int count  =0; int index=n; bool cond = false;
    for(int i=0;i<n;i++){
        if(s[i]==1 && b>0 && a<per){
            b--;
            if(a+1<=per){
               a =  a+1;
            }
        
        }
        else if(s[i]==1 && a==per){
            a--;
        }
        else if(s[i]==1 && b<=0 && a>0){
            a--;
        }
        else if(s[i]==0 && a>0){
            a--;
        }
        else if(s[i]==0 && b>0 && a<=0){
            b--;
        }
        if(a<=0 && b<=0 && i!=n-1){
            index  = i;
            cond = true;
            break;
        }
        // cout<<b<<" "<<a<<endl;
    }
        if(cond==true){
        cout<<index+1<<endl;
        }
        else{
            cout<<index<<endl;
        }
    

    

    
}   