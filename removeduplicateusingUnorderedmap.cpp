#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<int> removeduplicateusingUnorderedmap(int arr[],int size){
    vector<int> arr1;
    unordered_map<int ,bool> unique;
    for(int i=0;i<size;i++){
        if(unique.count(arr[i])>0){
            continue;
        }
        unique[arr[i]]=true;
        arr1.push_back(arr[i]);
    }
    return arr1;
}
int main(){
    int arr[10]= {1,1,2,4,5,3,5,5,4,0};
    vector<int> arr1;
    arr1=removeduplicateusingUnorderedmap(arr,10);
    sort(arr1.begin(),arr1.end());
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    return 0;
}