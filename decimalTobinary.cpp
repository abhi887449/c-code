#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverseBinary(int temp){
    int rev=0;
     while(temp!=0){
        rev = rev*10 + temp%2;
        temp= temp/2; 
    }
    return rev;
}
int reverse(int temp){
    int rev=0;
     while(temp!=0){
        rev = rev*10 + temp%10;
        temp= temp/10; 
    }
    return rev;
}
//error in code chech for 2....
int main(){
    int n;      //decimal number
    cin>>n;
    int rev,binary;
    rev = reverseBinary(n);
    cout<<rev<<endl;
    binary = reverse(rev);
    cout<<binary<<endl;
    // cout<<"Binary Number:"<<bitset<8>(n).to_string();
    return 0;
}