#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isscontaint(string s,string t){
    string str;
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i] == t[j]){
            str = str + s.substr(i,1);
            j++;
        }
    }
    return str==t?true:false;
}
int main(){
    string s,t;
    cin>>s>>t;
    bool check = isscontaint(s,t);
    cout<<check;
    return 0;
}