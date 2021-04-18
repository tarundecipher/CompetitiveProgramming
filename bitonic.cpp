#include <iostream>
#include <bits/stdc++.h>

using namespace std;






int main(){




    int a[] = {3,5,8,4,5,9,10,8,5,3,4};
    int inc[11],dec[11];
    fill(inc,inc+11,1);
    fill(dec,dec+11,1);

  for(int i=0;i<11;i++){
      inc[i] =1; dec[i] =1;
  }
    for(int i=1;i<11;i++){
        if(a[i]>=a[i-1]){
            inc[i] = inc[i-1] +1;
        }
    }

    for(int i=9;i>=0;i--){
        if(a[i]>=a[i+1]){
            dec[i] = dec[i+1] +1;
        }
    }
    int ma = INT_MIN;
    for(int i=0;i<11;i++){
        ma = max(ma,inc[i]+dec[i]-1);
    }
    cout<<ma<<endl;
    for(int i=0;i<11;i++){
        cout<<dec[i]<<" ";
    }
    cout<<endl;
    
   
}

