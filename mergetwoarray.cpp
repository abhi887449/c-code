#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int arr1[],int newarr[],int n1,int n2){
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr[i]<=arr1[j]){
            newarr[k++]=arr[i++];
        }
        else{
            newarr[k++]=arr1[j++];
        }
    }
    while(i<n1){
        newarr[k++]=arr[i++];
    }
    while(j<n2){
        newarr[k++]=arr1[j++];
    }
}

int main(){
    int arr[]={1,9,2,8,3,7,4,6,5};
    int arr1[]={1,9,7,12};
    int length=(sizeof(arr)+sizeof(arr1))/sizeof(int);
    int newarr[length];
    sort(arr,arr+9);
    sort(arr1,arr1+4);
    merge(arr,arr1,newarr,9,4);
    for(int i=0;i<length;i++){
        cout<<newarr[i];
    }
    return 0;
}