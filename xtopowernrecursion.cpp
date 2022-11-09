#include<iostream>
int pow(int x,int n){
    if(n==0)
    return 1;
    return x*pow(x,n-1);
}
using namespace std;
int main(){
    int n,x;
    cin>>x>>n;
    int xton = pow(x,n);
    cout<<xton;
    return 0;
}