#include<iostream>
using namespace std;
int main() {
    int n, k;//k target number
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;               // k is read after the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}