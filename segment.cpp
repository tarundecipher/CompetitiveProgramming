#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int RMQUtil(int *st, int ss, int se, int qs, int qe, int index)  
{  
    // If segment of this node is a part  
    // of given range, then return  
    // the min of the segment  
    if (qs <= ss && qe >= se)  
        return st[index];  
  
    // If segment of this node 
    // is outside the given range  
    if (se < qs || ss > qe)  
        return INT_MAX;  
  
    // If a part of this segment 
    // overlaps with the given range  
    int mid = ss+(se-ss)/2;
    return min(RMQUtil(st, ss, mid, qs, qe, 2*index+1),  
                RMQUtil(st, mid+1, se, qs, qe, 2*index+2));  
}  
int RMQ(int *st, int n, int qs, int qe)  
{  
    // Check for erroneous input values  
    if (qs < 0 || qe > n-1 || qs > qe)  
    {  
        cout<<"Invalid Input";  
        return -1;  
    }  
  
    return RMQUtil(st, 0, n-1, qs, qe, 0);  
}  
int constructstu(int arr[],int ss,int se,int *st,int si){
    if(ss==se){
        st[si] = arr[ss];
        return arr[ss];
    }
    int mid = ss+ (se-ss)/2;
    st[si] = min(constructstu(arr,ss,mid,st,2*si+1), constructstu(arr,mid+1,se,st,2*si+2));
    return st[si];
}



int *constructst(int arr[],int n){
    int x = (int)ceil(log2(n));
    int max_size = 2*(int)pow(2,x)-1;
    int *st = new int[max_size];
    constructstu(arr,0,n-1,st,0);
    return st;
}

