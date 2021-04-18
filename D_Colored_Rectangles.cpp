#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int clc(int r[],int g[],int b[],map<int,int> r1,map<int,int> g1,map<int,int> b1
,int R,int G,int B){
    
    int a1=0,a2=0,a3=0;

    for(int i1=0;i1<R;i1++){
        for(int j1 =0;j1<G;j1++){
            int p=0;
            if(!r1[i1] && !g1[j1]){
                r1[i1]++; g1[j1]++;
                p = r[i1]*g[j1] + clc(r,g,b,r1,g1,b1,R,G,B);
                r1[i1] = 0; g1[j1] =0;
            }

            a1 = max(a1,p);

        }
    }

    for(int j1=0;j1<G;j1++){
        for(int k1 =0;k1<B;k1++){
            int p=0;
             if(!g1[j1] && !b1[k1]){
                g1[j1] = 1; b1[k1] =1;
                p = g[j1]*b[k1] + clc(r,g,b,r1,g1,b1,R,G,B);
                 g1[j1] = 0; g1[k1] =0;
             }
             a2 = max(a2,p);
        }
    }

    for(int i1=0;i1<R;i1++){
        for(int k1 =0;k1<B;k1++){
            int p=0;
            if(!r1[i1] && !b1[k1]){
                r1[i1] = 1; b1[k1] =1;
                p = r[i1]*b[k1] + clc(r,g,b,r1,g1,b1,R,G,B);
               r1[i1] = 0; b1[k1] =0;
             }
            a3 = max(a3,p);
        }

    }

    return max(a1,max(a2,a3));
}



int main(){
   int R,G,B; cin>>R>>G>>B;
   int r[R],g[G],b[B];

   for(int i=0;i<R;i++){
       cin>>r[i];
   }
   for(int i=0;i<G;i++){
       cin>>g[i];
   }
   for(int i=0;i<B;i++){
       cin>>b[i];
   }

  map <int,int> r1,b1,g1;
  cout<<clc(r,g,b,r1,g1,b1,R,G,B)<<endl;












}