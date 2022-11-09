#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> s;
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        
        if(str[i]=='('){
            s.push('(');
            continue;
            
        }
        if(str[i]=='['){
            s.push('[');
            continue;
            
        }
        if(str[i]=='{'){
            s.push('{');
            continue;
            
        }
        else if(str[i]==')'){
           
            if(s.top() == '('){
                s.pop();
            }
            else{
                break;
            }
        }
        else if(str[i]==']'){
           
            if(s.top() == '['){
                s.pop();
            }
            else{
                break;
            }
        }
        else if(str[i]=='}'){
            
            if(s.top() == '{'){
                s.pop();
            }
            else{
                break;
            }
        }
    }
    if(s.empty()){
        cout<<"equation is parenthesise correctly"<<endl;
    }
    else{
        cout<<"equation is not parenthesise correctly"<<endl;
    }
    return 0;
}