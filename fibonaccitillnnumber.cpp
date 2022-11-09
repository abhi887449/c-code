#include<iostream>
using namespace std;
void printfibonacci(int n){
    int x=0,x1=n-2,x2=n-1;
    if(n==1){
        cout<<x1;
    }
    else if(n==2){
        cout<<0<<" "<<1<<" ";
    }
    else{
        printfibonacci(n-1);
        x= x1+x2-2;
        cout<<x<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    printfibonacci(n);
    return 0;
}