#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    string trev = "";
    int size = t.size();

    for (int i = size - 1; i >= 0; i--) {
        trev += t[i];
    }

    if (trev == s) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;

}