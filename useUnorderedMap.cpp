#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    unordered_map<string, int> ourmap;
    //insert 
    //method 1
    pair<string , int> p("abhi",1);
    ourmap.insert(p);
    //method 2
    ourmap["Abhi2"]=2;
    // find or access
    cout<<ourmap["abhi"]<<endl;
    cout<<ourmap["bhi"]<<endl;  //this type of access will not through error even it insert key "bhi" and value 0 and return 0
    cout<<ourmap.at("abhi")<<endl; //this type of access will through error if key is not found

    // check presence
    // count function count number of key 
    if(ourmap.count("abhi")>0){
        cout<<"abhi is present"<<endl;
    }

    // find size 
    cout<<ourmap.size()<<endl;

    //erase 
    ourmap.erase("bhi");
    cout<<ourmap.size()<<endl;
    return 0;
}