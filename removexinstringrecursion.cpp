#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string removex(string str,char x){
    if(str.length() == 1){
        if(str[0] == 'x'){
            return str.substr(1);
        }
        return str;
    }
    if(str[0]==x){
        return removex(str.substr(1),x);
    }
    else{
        return str[0] + removex(str.substr(1),x);
    }

}
int main(){
    string str;
    cin>>str;
    char x;
    cin>>x;
    str = removex(str,x);
    cout<<str;
    return 0;
}
