#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int num;
        cin>>num;
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
            if(i!=j){
                if(arr[i]+arr[j]==num){
                    count++;
                }
            }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}