#include<iostream>
using namespace std;
//check number is prime or not
bool prime_number(int n){
    for(int i=2;i<=n/2;i++){
        if(n%2==0){
            return false;//Not a prime
        }
    }
        return true;//Prime
    }
    //print prime numbers
    void PrintPrime(int n){
         for(int i=2;i<=n;i++){
            if(prime_number(i)){
                cout<<i<<" ";
            }
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    PrintPrime(n);//function call
    return 0;
}