#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,a,b; cin>>n>>k>>a>>b;
    int b1 = b; int g1 = a;
    bool cond = false;
    if(a<b){
        swap(a,b);
        cond  = true;
    }
    int res;
    if(a!=0 && b!=0){
        res = a/b;
    }
    else{
        if((a!=0 && a<=k) || (b!=0 && b<=k)){
            if(cond==true){
                for(int i=0;i<n;i++){
                    cout<<"B";
                }cout<<endl;
            }
            else{
                for(int i=0;i<n;i++){
                    cout<<"G";
                }cout<<endl;
            }
            return 0;
        }
        else{
            if(a==0 && b==0){
                
                return 0;
            }
            else{
        cout<<"NO"<<endl;
        return 0;
            }
        }
    }
    if((b+1)*k>=a){
      
           string temp = "";
            char re = 'B';
            char re2 ='G';
           
           if(b1>g1){
               swap(b1,g1);
               swap(re,re2);
               
            
           }
           int N = 200000;
           char arr[N];
           memset(arr,0,sizeof(arr));
           for(int i=k;i<N;i+=k+1){
               if(b1>0){
               arr[i] = re;
               b1--;
               }
           }
            int p =0;
           while(g1>0){
             for(int i=0;i<N;i+=k+1){
                 if(g1>0){
                 arr[i+p] = re2;
                 g1--;
                 }
                 else{
                     break;
                 }
             }
             p++;
           }
           for(int i=0;i<N;i++){
               if(arr[i]!=0){
               temp+=arr[i];
               }
           }
            cout<<b1<<" "<<g1<<endl;
           cout<<temp.length()<<endl;
           cout<<temp<<endl;
        
    }
    else{
        cout<<"NO"<<endl;
    }

    
    
}   