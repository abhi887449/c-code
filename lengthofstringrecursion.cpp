#include<iostream>
using namespace std;
int length(char str[]){
    if(str[0] == '\0'){
        return 0;
    }
    return 1 + length(str+1);
}
int main(){
    char str[200];
    cin>>str;
    int len = length(str);
    cout<<len;
    return 0;
}