#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s[0] == '+' || s[2] == '+') {
            res += 1;
        } else {
            res -= 1;
        }
    }

    cout << res << endl;
    return 0;
}