#include<iostream>
using namespace std;
string eraserepetition(string str){
    if(str.length()==1 || str.length()==0){
        return str;
    }
    if(str[0]==str[1]){
        str= str.substr(1);
        str= eraserepetition(str);
    }
    return str.substr(0,1) + eraserepetition(str.substr(1));
}
int main(){
    string str;
    cin>>str;
    str = eraserepetition(str);
    cout<<str;
    return 0;
}