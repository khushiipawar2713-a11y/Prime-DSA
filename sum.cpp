# include<iostream>
  using namespace std;

  int main(){
      int n,sum=0,i=1;

          cout<<"Enter number: ";
      cin>>n;

      while(i<=n){
          sum+=i;
          i++;
      }
       cout<<" sum from 1 to "<<n<<"is: "<<sum<<endl;
      return 0;
      }
