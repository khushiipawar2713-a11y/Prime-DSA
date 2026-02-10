#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    //initialization
    vector<int>a;

    //updation
    a.push_back(1);
     a.push_back(2);
     a.push_back(3);
 a.push_back(4);
 a.push_back(5);
 a.pop_back();
 //print
 for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
 }
 cout<<endl;
 cout<<a.front()<<endl;
 cout<<a.back()<<endl;

 //reverse and sort
 reverse(a.begin(),a.end());
 sort(a.begin(),a.end());

 //value insert
 a.insert(a.end()-1,6);
 for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
 }
 return 0;

//int n;
//cin>>n;
//vector<int> arr(n);
}