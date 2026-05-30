#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int o = 0;
    int t = 0;
    int th = 0;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            o += 1;
        } else if (s[i] == '2') {
            t += 1;
        } else if (s[i] == '3') {
            th += 1;
        } else {
            continue;
        }
    }

    string res = "";
    for (int i = 0; i < o; i++) {
        res += "1";
        res += "+";
    }
    for (int i = 0; i < t; i++) {
        res += "2";
        res += "+";
    }
    for (int i = 0; i < th; i++) {
        res += "3";
        res += "+";
    }
    int y = res.size();
    cout << res.substr(0, y - 1) << endl;
    return 0;
}