#include<iostream>
using namespace std;
bool checkab(string str){
    if(str == ""){
        return true;
    }
    else if(str.length() == 1 && !(str.compare("a"))){
        return true;
    }
    else if(str.length() == 3 && !(str.compare("abb"))){
        return true;
    }
    else if(str.length() == 2){
        return false;
    }
    else if(str.length()==1 || str.length()==2 || str.length()==3){
        return false;
    }
    return checkab(str.substr(3));

}
int main(){
    string str;
    cin>>str;
    bool check = checkab(str);
    cout<<check;
    return 0;
}