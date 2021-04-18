#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


struct node{
    int val = -1;
};
map<pair<int,pair<int,int>>,node> arr;
int clc(vector<int> & nums,int prev,int next,int n,int count){
   
    if(next>=n){
        return 0;
    } 
    if(arr[{prev,{next,count}}].val!=-1){
        return arr[{prev,{next,count}}].val;
    }
    int a1=0;int a2=0;
    if(nums[next]>nums[prev]){
    a1 =     1+ clc(nums,next,next+1,n,count);
    }
    if(count<1){
         
    a2 = clc(nums,prev,next+1,n,count+1);
       
    }
    arr[{prev,{next,count}}].val= max(a1,a2);
    return max(a2,a1);
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int n1; cin>>n1;
    vector<int> nums;
    for(int i=0;i<n1;i++){
        int temp; cin>>temp;
        nums.push_back(temp);
    }

    // memset(arr,-1,sizeof(arr));
      int n = nums.size();
        if(n==0){
            return 0;
        }
        int ma = 0;
      for(int i=0;i<n-1;i++){
        
          int temp = clc(nums,i,i+1,n,0);
          ma  = max(temp,ma);
      }
       cout<<ma+1<<endl;
        
    
 

    
}   