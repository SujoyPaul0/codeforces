#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s[0] != '1') {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '1' && s[i] != '4') {
            cout << "NO";
            return 0;
        }
    }

    if (s.find("444") != string::npos) {
        cout << "NO";
    } else {
        cout << "YES";
    }

    return 0;
    
}