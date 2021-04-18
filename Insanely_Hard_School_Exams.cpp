#include <iostream>
#include <bits/stdc++.h>

using namespace std;
map <pair<int,int>,int> mp2;
int ncr(int n, int r) 
{ 
    if(mp2[{n,r}]){
        
        return mp2[{n,r}];
    }
  
    // p holds the value of n*(n-1)*(n-2)..., 
    // k holds the value of r*(r-1)... 
    long long p = 1, k = 1; 
  
    // C(n, r) == C(n, n-r), 
    // choosing the smaller value 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  
            // gcd of p, k 
            long long m = __gcd(p, k); 
  
            // dividing by gcd, to simplify product 
            // division by their gcd saves from the overflow 
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
  
        // k should be simplified to 1 
        // as C(n, r) is a natural number 
        // (denominator should be 1 ) . 
    } 
  
    else
        p = 1; 
  
    // if our approach is correct p = ans and k =1 
    mp2[{n,r}] =p;
    return p;
} 

int clc1(vector <int> lines){
    int num =0;
        for(auto i:lines){
         int temp = i;
         if(temp>=3){
             num+= ncr(temp,3);
         }
         
     }
     return num;

}

map <int,int> mp1;
vector <int> calc(vector <int> lines,int v[],int k,int c,int s){
    // if(mp1[s]){
    //     // cout<<"hi";
    //     return mp1[s];
    // }
    if(k<=0 || s>=c+1){
        return lines;
    }
    vector <int> a1,a2;
    
         

        
        a1 = calc(lines,v,k,c,s+1);
        
        if(lines[s]>0 && k-v[s]>=0){
            lines[s]--;
        
        a2 = calc(lines,v,k-v[s],c,s);
        
        }

    int a3 = clc1(a1);
    int a4 = clc1(a2);

    if(a3<a4){
        return a1;
    }
    else{
        return a2;
    }
      
   
   
//    mp1[mp] = min(a1,a2);
//     return min(a1,a2);
}


int main(){
   int t; cin>>t;
   
   while(t--){
     int n,c,k; cin>>n>>c>>k;
     vector <int> lines(c+1,0);
     map <int,int> freq;
     for(int i=0;i<n;i++){
         int a,b,c1; cin>>a>>b>>c1;
         freq[c1]++;
     }
     int v[c+1]; 
     for(int i=0;i<c;i++){
         int temp; cin>>temp;
         v[i+1]  =  temp;
        
         
     }
     for(int i=1;i<=c;i++){
         lines[i] = freq[i];
     }
     
    
     mp1.clear();
     vector <int> ans =calc(lines,v,k,c,1);
     cout<<clc1(ans)<<endl;
    
  
 }
}

