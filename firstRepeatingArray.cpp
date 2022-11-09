#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,repeat=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arrfrn[n];
    for(int i=0;i<n;i++){
        arrfrn[i] = 0;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arrfrn[repeat]++;
            }
        }
        repeat++;
    }
    for(int i=0;i<n;i++){
        if(arrfrn[i]!=0){
            cout<<arr[i];
            break;
        }
    }

    return 0;
}