#include<iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;
int isxpresent(int arr[],int n,int x){
    if(n==0){
        return -1;
    }
    if(arr[n]==x){
        return n;
    }
    return isxpresent(arr,n-1,x);
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
    cout<<isxpresent(arr,n,x);
}