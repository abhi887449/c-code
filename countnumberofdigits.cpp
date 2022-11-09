#include<iostream>
using namespace std;
int countdigits(int n,int& i){
    if(n <= 9 && n >=0){
        i++;
     return 0;
    }
    i++;
    n= n/10;
    countdigits(n,i);
    return 0;
    }
int main(){
    int n,i=0;
    cin>>n;
    countdigits(n,i);
    cout<<i;
    return 0;
}