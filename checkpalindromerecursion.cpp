#include<iostream>
using namespace std;
string checktrue(bool a){
	if(a){
		return "true";
	}
	else{
		return "false";
	}
}
bool checkpalindrome2(string str,int s,int e){
	if(s==e){
		return 1;
	}
	 if(str[s]!=str[e]){
		return 1;
	}
	if(s<e+1){
		return checkpalindrome2(str,s+1,e-1);
	}
}
bool ispalindrome(string s){
	int n = s.length();
	if(n==0){
		return 1;
	}
	else{
		return checkpalindrome2(s,0,n-1);
	}
}

//not giving answer
int main(){
	string s;
	cin>>s;
	cout<<checktrue(ispalindrome(s));
	return 0;
}
