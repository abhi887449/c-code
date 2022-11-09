#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N=1e6;
    bool array[N];
    for(int i=0;i<N;i++){
        array[i]=false;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            array[arr[i]]=true;
        }
    }
    for(int i=0;i<n;i++){
        if(array[i]==false){
            cout<<i << " is not present";
            break;
        }
    }

    
return 0;

}