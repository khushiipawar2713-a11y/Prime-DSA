#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odd=0,even=0;
        while(n!=0){
            int k=n%10;
            if(k%2==0){
                even+=k;
            }
            else{
                odd+=k;
            }
            n=n/10;
        }
        if(odd%3==0 or even%4==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}