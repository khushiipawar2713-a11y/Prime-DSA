#include<iostream>
using namespace std;
bool check_prime_number(int n){
    if(n<=1)
    return false;
    for(int i=2;i*i<=n;i++){
    if( n%i==0){
        return false;
    }
}
        return true;
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
   if(check_prime_number(num))
   cout<<"Prime number";
   else
   cout<<"Not a Prime number";
    return 0;
}