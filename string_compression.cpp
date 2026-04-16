#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    if (!getline(cin, s)) return 0;

    int n = s.length();

    for (int i = 0; i < n; i++) {
        int count = 1;
        char c = s[i];

        while (i < n - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }

        if (count > 1) {
            cout << c << count;
        } else {
            cout << c;
        }
    }

    return 0;
}