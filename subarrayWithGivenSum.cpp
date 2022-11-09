#include <iostream>
using namespace std;

// not giving ans 

int main()
{
    int n,s;
    cin>>n>>s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i=0,end=0;
    int sum=0;
    for(i=0;i<n;i++){
        
            while(sum<=s){
                sum+=arr[end];
                end++;
            }
            if(sum==s){
                break;
            }
            else{
                end=i;
            }
        
    }
    for(int k=i;k<=end;k++){
        cout<<arr[k]<<" ";
    }
}