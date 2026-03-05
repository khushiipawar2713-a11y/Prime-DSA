#include<iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	//input
	for (int i=0;i<n;i++) {
		cin>>arr[i];
	}
    //sort karne ke liye
	sort(arr, arr+n);
	//output
	for (int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	return 0;
}