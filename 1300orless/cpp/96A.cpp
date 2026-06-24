#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 1;

    for (int i = 1; i < s.length(); i++) {

        if (s[i] == s[i - 1]) {
            cnt++;
        } else {
            cnt = 1;
        }

        if (cnt >= 7) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}