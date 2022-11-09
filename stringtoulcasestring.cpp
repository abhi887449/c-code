#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    char newstr[str.length()];
    for(int i=0;i<str.length();i++){
        if(i%2==0){
            newstr[i] = tolower(str[i]);
        }
        else{
            newstr[i] = toupper(str[i]);
        }
    }
    newstr[str.length()] = '\0';
    cout<<newstr;
  
}