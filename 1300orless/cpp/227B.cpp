#include <array>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    unordered_map<int, int> mp;

    int var;
    for (int i = 1; i <= n; i++) {
        cin >> var;
        mp[var] = i;
    }
    long long v = 0;
    long long p = 0;
    int var2;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> var2;
        v += mp[var2];
        p += n - mp[var2] + 1;
    }

    cout << v << " " << p << endl;
    return 0;

}