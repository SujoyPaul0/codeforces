#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    vector<int> rounds(n);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        rounds[i] = (x + m - 1) / m;
    }

    int mx = 0;
    int res = 0;

    for (int i = 0; i < n; i++) {
        if (rounds[i] >= mx) {
            mx = rounds[i];
            res = i + 1;
        }
    }

    cout << res << endl;
    return 0;

}