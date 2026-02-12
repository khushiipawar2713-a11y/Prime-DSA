#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int mid = N / 2;

    // Upper half (including middle row)
    for (int i = 0; i <= mid; i++) {
        // Leading spaces
        for (int s = 0; s < mid - i; s++) {
            cout << "   ";
        }
        // Stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*  ";
        }
        cout << endl;
    }

    // Lower half
    for (int i = mid - 1; i >= 0; i--) {
        // Leading spaces
        for (int s = 0; s < mid - i; s++) {
            cout << "   ";
        }
        // Stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*  ";
        }
        cout << endl;
    }

    return 0;
}
