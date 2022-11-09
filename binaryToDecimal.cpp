#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int binary,exponent=0,decimal=0;
    cin>>binary;
    while(binary!=0){
        int r;
        r=(binary%10);
          binary=binary/10;
        decimal += r * pow(2,exponent);
        exponent++;
      
    }
    cout<<decimal;
    return 0;
}