#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    if (!getline(cin, s)) return 0;

    int n = s.length();

    for (int i = 0; i < n; i++) {
        char c = s[i];
    
        while (i < n && s[i] == c) {
            i++;
        }

        cout << c;

        i--;
    }

    return 0;
}