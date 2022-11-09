#include<iostream>
using namespace std;

void printnnumbers(int n){
    if(n==1){
        cout<<n;
    }
    else{
        cout<<n<<" ";
        printnnumbers(n-1);
    }

}
using namespace std;
int main(){
    int n;
    cin>>n;
    printnnumbers(n);
    return 0;
}