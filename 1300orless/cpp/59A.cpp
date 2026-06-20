#include <bits/stdc++.h>
using namespace std;

int main() {
    int upper = 0;
    int lower = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        int asciiValue = static_cast<int>(s[i]);
        if (asciiValue >= 97 && asciiValue <= 122) {
            lower += 1;
        } else {
            upper += 1;
        }
    }

    if (lower < upper) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}