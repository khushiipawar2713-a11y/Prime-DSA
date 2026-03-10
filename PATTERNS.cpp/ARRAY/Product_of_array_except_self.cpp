#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    long long arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long leftProduct[n];
    long long rightProduct[n];
    long long ans[n];

    leftProduct[0] = 1;
    for(int i = 1; i < n; i++){
        leftProduct[i] = leftProduct[i-1] * arr[i-1];
    }

    rightProduct[n-1] = 1;
    for(int i = n-2; i >= 0; i--){
        rightProduct[i] = rightProduct[i+1] * arr[i+1];
    }

    for(int i = 0; i < n; i++){
        ans[i] = leftProduct[i] * rightProduct[i];
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

}