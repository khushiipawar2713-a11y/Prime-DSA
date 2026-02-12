#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mid = n / 2;

    // Upper half (including middle row)
    for (int i = 0; i <= mid; i++) {
        //spaces
        for (int s = 0; s < mid - i; s++) {
            cout << "   ";
        }
        int num=i+1;
        //increasing number
        for (int j = 0; j <= i; j++) 
            cout <<num++ << "  ";
            num-=2;//fix num for reverse
        
        //decreasing number
        for (int j = 0; j < i; j++) 
        cout<<num--<<" ";//num-- print backwards
        cout<<endl;
    }

    // Lower half
    for (int i = mid - 1; i >= 0; i--) {
        for (int s = 0; s < mid - i; s++) 
            cout << "   ";
        
        int num=i+1;
        for (int j = 0; j <= i; j++) 
            cout <<num++ << "  ";
            num-=2;
        for (int j = 0; j < i; j++) 
        cout<<num--<<" ";
        
        cout << endl;
    }

    return 0;
}
