#include<iostream>
using namespace std;
int sumarray(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n,sp,arrsum=0;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = sumarray(arr,n);
    for(int i=0;sum>=arrsum;i++){
        if(sum == arrsum){
            sp=i;
            break;
        }
    arrsum+=arr[i];
    sum-=arr[i];
    }
    for(int i=0;i<n;i++){
        if(i<sp){
            
        }
    }

    delete arr;
    return 0;
}