#include <iostream>
#include <vector>
using namespace std;
int findKthPositive(int arr[], int k) {
        int i=0,count = 1;
        vector<int> miss;
        while(i<5){
            if(count == arr[i]){
                i++;
                count++;
            }
            else{
                miss.push_back(count);
                count++;
            }
        }
        if(miss.size()==k){
            return miss[k-1];
        }
        else{
            while(miss.size() != k){
                
                miss.push_back(count);
                count++;
            }
            return miss[k-1];
        }
        return miss[k-1];
         
    }
int main(){
    int arr[5]={1,2,3,4,5};
    int k =findKthPositive(arr,2);
    cout<<k;
    return 0;
}