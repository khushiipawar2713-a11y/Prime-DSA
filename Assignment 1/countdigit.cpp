#include<iostream>
using namespace std;
int main(){
int n;
	int d;
	int count=0;
	cin>>n>>d>>count;
	while(n>0){
		if(n%10==d)
		count++;
		n=n/10;
	}
	cout<<count;
	return 0;
}