#include <iostream>
#include <bits/stdc++.h>

using namespace std;




int main(){
  int a,b,x; cin>>a>>b>>x;
  string s = "";
  for(int i=0;i<a;i++){
      s+="0";

  }
  int counta = 0;
  for(int i=1;i<a && x-2>=0 && b>0;i=i+2){
      s[i]='1';
      x--;x--;
      b--;
      counta++;
  }
  if(x%2!=0){
  for(int i=0;i<counta;i++){
      s+="0";
  }
  for(int i=0;i<b;i++){
      s+="1";
  }
  }
  else{
    
  for(int i=0;i<b;i++){
      s+="1";
  }
    for(int i=0;i<counta;i++){
      s+="0";
  }
  }
  cout<<s<<endl;
  
}

