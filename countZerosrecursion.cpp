#include<iostream>
using namespace std;
int countzeros(int n){
    if(n==0){
        return 1;
    }
    else if(n%10==0){
        return 1+ countzeros(n/10);
    }
    else
    {
        return countzeros(n/10);
    }
}
int main(){
    int n;
    cin>>n;
    int zeros = 0;
     zeros=countzeros(n);
    cout<<zeros;
    return 0;
}