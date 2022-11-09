#include<iostream>
using namespace std;
string replacec1byc2(string str,char c1,char c2){
    if(str.length() == 1 || str.length()==0){
        if(str[0]==c1){
            str[0]=c2;
            return str;
        }
        return str;
    }
    if(str[0]==c1){
        str[0]=c2;
        return str.substr(0,1) + replacec1byc2(str.substr(1),c1,c2);
    }
    else{
        return str.substr(0,1) + replacec1byc2(str.substr(1),c1,c2);
    }
}
int main(){
    string str;
    cin>>str;
    char c1,c2;
    cin>>c1>>c2;
    str=replacec1byc2(str,c1,c2);
    cout<<str;
    return 0;
}