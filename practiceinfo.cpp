#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,count=1;
	    cin>>n;
	    if(n==2){
	        cout<<-1<<endl;
	    }
	    else if(n==3){
	        cout<<1<<" "<<2<<" "<<3<<endl;
	    }
	    else{
	        if(n%2!=0){
	            int i;
	            for(i=1;i<n;i++){
	                cout<<i<<" ";
	            }
	            cout<<i<<endl;
	        }
	        else{
	            int pre=4;
	            cout<<2<<" "<<3<<" "<<1<<" ";;
	            for(int i=1;i<n-4;i++){
	                cout<<pre<<" ";
	                pre++;
	            }
	            cout<<pre<<endl;
	        }
	    }
	}
	return 0;
}