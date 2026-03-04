#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n],val[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		val[arr[i]]=i;
	}
	for(int i=0;i<n;i++){
		cout<<val[i]<<" ";
	}
	return 0;
}