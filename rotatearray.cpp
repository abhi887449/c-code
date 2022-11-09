#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        temp = arr[0];
        for(int j=0;j<n;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}