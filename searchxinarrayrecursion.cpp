#include<iostream>
using namespace std;
bool isxpresent(int arr[],int n,int x){
    if(n==0){
        return false;
    }
    if(arr[n]==x){
        return true;
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