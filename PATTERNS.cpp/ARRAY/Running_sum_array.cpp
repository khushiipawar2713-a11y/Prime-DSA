#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    //input lene ke liye
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    //Running sum ke liye
    int sum=0;
    for (int i=0;i<n;i++) {
        sum = sum+arr[i];
        //output ke liye
        cout<<sum<<" ";
    }
    return 0;
}