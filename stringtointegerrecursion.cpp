#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int toint(string str){
    if(str.length() == 1){
        return int(str[0])-48;
    }
    return pow(10,str.length()-1)*(int(str[0]) - 48) + toint(str.substr(1));

}
int main(){
    string str;
    cin>>str;
    int strtoint = toint(str);
    cout<<strtoint;
    return 0;
}