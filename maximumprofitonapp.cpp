#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int n,profit=0;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]*(n-i) > profit){
            profit = arr[i]*(n-i);
        }
    }
    cout<<profit;
    return 0;
}