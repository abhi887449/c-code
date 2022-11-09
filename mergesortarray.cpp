
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int start,int mid,int end){
    int i=start,j=mid+1,k=0;
    int temparr[start+end+1];
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temparr[k++]=arr[i++];
        }
        else{
            temparr[k++]=arr[j++];
        }

    }
    int it=0;
    for(int i=start;i<end;i++){
        arr[i]=temparr[it++];
        
    }
}
void mergesort(int arr[],int start,int end){
    if(end<=start){
        return;
    }
    int mid = (start+end)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main()
{
    int arr[]={1,9,2,7,0,3,7,6,4,5};
    int length = sizeof(arr)/sizeof(int);
    mergesort(arr,0,length-1);
    // merge(arr,0,(length-1)/2,length-1);
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}