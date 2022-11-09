#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,temp,min=INT_MAX;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            temp = i;
        }
    }
    cout<<temp;
    return 0;
}