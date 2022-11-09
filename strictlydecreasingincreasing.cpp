#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j,decreasing=0,increasing=0;
    for(j=0;j<n;j++){
        if(arr[j]>arr[j+1]){
            decreasing++;
        }
        else{
            break;
        }
    }


    for(int k=j;k<n;k++){
        if(arr[k]<arr[k+1]){
            increasing++;
        }
        else{
            break;
        }
    }
    if((increasing+decreasing)==n){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    return 0;
}