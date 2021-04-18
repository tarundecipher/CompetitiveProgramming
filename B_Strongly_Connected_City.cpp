#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int sol[30][30];


void backtrack(string a,string b,int i,int j,int n,int m,int &count){
if(i<0 || j<0 || i>=n || j>=m ){
    return;
}
if(sol[i][j]==1){
    return;
}

sol[i][j] =1;
count++;
if(a[i]=='>'){
    backtrack(a,b,i,j+1,n,m,count);
}
else{
    backtrack(a,b,i,j-1,n,m,count);
}
if(b[j]=='^'){
    backtrack(a,b,i-1,j,n,m,count);
}
else{
    backtrack(a,b,i+1,j,n,m,count);
}


}





int main(){
  int n,m; cin>>n>>m;
  string a;
  string b;
  memset(sol,0,sizeof(sol));
 
      cin>>a;
  
  
      cin>>b;

  bool condi = true;

             
 int count =0;
 backtrack(a,b,0,0,n,m,count);
 if(count!=n*m){
     condi = false;
 }
 count  =0;
   memset(sol,0,sizeof(sol));
  backtrack(a,b,1,1,n,m,count);
  if(count!=n*m){
     condi = false;
 }
         
       


if(condi==false){
    cout<<"NO"<<endl;
}
else{

    cout<<"YES"<<endl;
}

}   