#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    // print duplicates also
    while(t--){
        int m;
        cin>>m;
        int arr1[m];
        for(int i=0;i<m;i++){
            cin>>arr1[i];
        }
        int n;
        cin>>n;
        int arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        // sort(arr1,arr1+n);
        // sort(arr2,arr2+m);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr1[i]==arr2[j]){
                    cout<<arr1[i]<<" ";
                }
            }
        }
    }
    return 0;
}