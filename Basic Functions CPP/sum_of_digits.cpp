#include<iostream>
using namespace std;
int sum_of_digits(int num){
int digitSum=0;

while(num>0){
    int lastdigit=num%10;//extract last digit or gives lastdig remainder
    num/=10;//removes last digit

    //digitSum+=lastdigit;
    digitSum=digitSum+lastdigit;
}
return digitSum;
}
int main(){
    cout<<sum_of_digits(2356)<<endl;
    return 0;
}