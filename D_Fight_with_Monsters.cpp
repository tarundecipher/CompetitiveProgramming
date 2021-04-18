#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


// int memo[2000][2][2000];

// int clc(vector<int>arr,int k,int n,bool cond,int a,int b,int turn){
//     if(memo[k][cond][turn]!=0){
        
//         return memo[k][cond][turn];
//     }
//     if(k>=n){
//         return 0;

//     }
//     int a1=0,a2=0;
//     if(cond==true){
//         if(arr[k]>0){
//            if(arr[k]-a<=0){
//                arr[k] = arr[k]-a;
//                a1 =  1 + clc(arr,k+1,n,false,a,b,turn);
//                arr[k] = arr[k]+a;
//            }
//            else{
//                arr[k] = arr[k]-a;
//                 a1 = clc(arr,k,n,false,a,b,turn);
//                 arr[k] = arr[k]+a;
//            }
           
//         }
//         else{
//            a1 = clc(arr,k+1,n,true,a,b,turn);
//         }
//     }
//     else{
        
//         if(arr[k]>0){
//            if(arr[k]-b<=0){
//                arr[k] = arr[k]-b;
//                a1 =  clc(arr,k+1,n,true,a,b,turn);
//                arr[k] = arr[k]+b;
//            }
//            else{
//                arr[k] = arr[k]-b;
//                 a1 = clc(arr,k,n,true,a,b,turn);
//                 arr[k] = arr[k]+b;
//            }
           
//         }
//         else{
//            a1 = clc(arr,k+1,n,false,a,b,turn);
//         }

        
//         if(turn>0){
//             turn--;
//         a2 = clc(arr,k,n,true,a,b,turn);
//         }
//     }
//     memo[k][cond][turn] = max(a1,a2);
//     return max(a2,a1);
// }


int main(){
    int n,a,b,k;
    cin>>n>>a>>b>>k;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%(a+b)!=0){
           
            arr[i] = arr[i]%(a+b);
        
        }
        else{
            arr[i] = a+b;
        }


          if(arr[i]<=a){
                arr[i] =0;
            }
            else{
           
              if(arr[i]%a!=0){
           arr[i] = arr[i]/a ;
        }
        else{
            arr[i] = (arr[i]/a)-1;
        }
            }
      

    }
    
    sort(arr,arr+n);
    int ans=0;
    for(int i=0;i<n;i++){
        if(k-arr[i]<0){
            break;
        }
        k = k-arr[i];
        ans++;
    }
    cout<<ans<<endl;
   
  

    
}   