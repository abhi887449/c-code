#include<iostream>
using namespace std;
int mul(int m,int n){
    if(m==0 || n==0){
        return 0;
    }
    if(n==1){
        return m;
    }
    return m + mul(m,n-1);
}
int main(){
int m,n;
cin>>m>>n;
int multiply = mul(m,n);
cout<<multiply;
return 0;
}
