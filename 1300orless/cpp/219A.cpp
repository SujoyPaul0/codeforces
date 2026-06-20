#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    string s;
    cin >> s;

    map<char, int> freq;

    for (char c : s)
        freq[c]++;

    string base = "";

    for (auto p : freq) {
        if (p.second % k != 0) {
            cout << -1 << endl;
            return 0;
        }

        for (int i = 0; i < p.second / k; i++) {
            base += p.first;
        }
    }

    for (int i = 0; i < k; i++) {
        cout << base;
    }

    cout << endl;
    return 0;
}