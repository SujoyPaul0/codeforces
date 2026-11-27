
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];

    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    int y = a[0];
    int k = a[1];
    int n = a[2];

    int x = k - (y % k);

    if (x == 0) {
        x = k;
    }

    if (y + x > n) {
        cout << -1;
    } else {
        for (; y + x <= n; x += k) {
            cout << x << " ";
        }
    }

    return 0;
}
