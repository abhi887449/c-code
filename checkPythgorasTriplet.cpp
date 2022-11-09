#include<iostream>
using namespace std;
int main(){
    float b,h,p;
    cin>>b>>h>>p;
    if(b*b == h*h + p*p || h*h == b*b + p*p || p*p == b*b + h*h){
        cout<<"Pythgoras Triplets";
    }
    else{
        cout<<"Not A Pythgoras Triplets";
    }
}