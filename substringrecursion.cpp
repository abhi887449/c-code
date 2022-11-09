#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int substring(string str,string output[]){
    if(str.empty()){
        output[0] = "";
        return 1;
    }
    string smallstring = str.substr(1);
    int smalloutputsize = substring(smallstring,output);
    for(int i=0;i< smalloutputsize;i++){
        output[i + smalloutputsize] = str[0] + output[i];
    }
    return 2*smalloutputsize;

}
int main(){
    string str;
    cin>>str;
    int len = pow(2,str.length());
    string* output = new string[len];
    int count = substring(str,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}