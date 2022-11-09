#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string pairstar(string str){
    if(str.length()==0 || str.length() == 1){
        return str;
    }
    if(str[0]==str[1]){
        string newstr = str.substr(0,1) + "*";
        return newstr + pairstar(str.substr(1));
    }
    else{
        return str.substr(0,1) + pairstar(str.substr(1));
    }
    
}
int main(){
    string str;
    cin>>str;
    str = pairstar(str);
    cout<<str;
    return 0;
}