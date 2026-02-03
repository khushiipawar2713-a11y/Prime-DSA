#include<iostream>
using namespace std;
//No argument and no return
void greet(){
     cout<<"hello"<<endl;
}
//Argument and no return
void greet(string name){
 cout<<"hello"<<name<<endl;
}
//No argument and return
int subtract(){
    int a=5;
    int b=3;
    int c=a-b;
    return c;
}
//Argument and return
int add (int a,int b){
    int c=a+b;
    return c;
}
int main({
    greet();
    great("khushi");
})
//1st way 
int a=add(9,7){
 cout<<a<<endl;
 //2nd way
 cout<<add(9,7)<<endl;
 cout <<subtract()<<endl;
 return 0;
}
