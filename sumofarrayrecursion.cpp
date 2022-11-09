#include <iostream>
using namespace std;
int sumarray(int arr[], int n){
    if(n==0){
        return 0;
    }

    return arr[n-1] + sumarray(arr,n-1);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sumarray(arr, n);
    return 0;
}