#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    //input lena
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    //har element ka square karna
    for (int i=0;i<n;i++) {
        arr[i]=arr[i]*arr[i];
    }
    //array ko sort karna
    sort(arr,arr+n);

    //print karane ke liye
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}