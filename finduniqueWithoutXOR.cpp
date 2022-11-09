#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
    const int N=1e6;
      int a[N];
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        a[arr[i]]=a[arr[i]]+1;
    }
    for(int i=0;i<N;i++){
        if(a[i]==1){
            cout<<i;
            break;
        }
    }
  }
  return 0;
}
