#include<iostream>
#include<bits/stdc++.h>
using namespace std;
float geometricsum(int k){
	if(k==0){
		return 1;
	}
	else{
		return ((1/pow(2,k)) + geometricsum(k-1));
	}
}
int main(){
	int k;
	cin>>k;
	float geosum = geometricsum(k);
	cout<<geosum;
	return 0;
}
