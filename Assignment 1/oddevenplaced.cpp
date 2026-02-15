#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int Osum=0;
	int Esum=0;
	int place=1;
	while(n!=0){
		int k=n%10;
		if(place%2==1){
			Osum+=k;
		} else {
			Esum+=k; 
		}
		n=n/10;
		place++;
	}
			cout<<Osum<<endl;
			cout<<Esum<<endl;

	return 0;
}