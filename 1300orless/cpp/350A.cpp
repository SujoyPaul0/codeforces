
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int minA = INT_MAX;
    int maxA = INT_MIN;
    int minB = INT_MAX;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        minA = min(minA, x);
        maxA = max(maxA, x);
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        minB = min(minB, x);
    }

    int ans = max(maxA, 2 * minA);

    if (ans < minB) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
