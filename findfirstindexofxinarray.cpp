#include<iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;
int isxpresent(int arr[],int n,int i,int x){
    if(n==0){
        return -1;
    }
    if(arr[i-n]==x){
        return i-n;
    }
    return isxpresent(arr,n-1,i,x);
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int i=n;
    cout<<isxpresent(arr,n,i,x);
}