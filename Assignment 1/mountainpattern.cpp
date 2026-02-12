#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {

        // Left increasing
        for(int j = 1; j <= i; j++)
            cout << j<<"   ";

        // Spaces
        for(int s = 1; s <= 2*(n-i); s++)
            cout << "    ";

        // Right decreasing (start from i-1)
        for(int j = i-1; j >= 1; j--)
            cout << j<<"   ";

        cout << endl;
    }
}