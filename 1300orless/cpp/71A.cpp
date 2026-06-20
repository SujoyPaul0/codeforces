#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        string res = "";

        int y = s.size();
        if (y > 10) {
            res += s[0];
            res += to_string(y-2);
            res += s[y - 1];
            cout << res << endl;
        } else {
            cout << s << endl;
        }
    }
    return 0;
}