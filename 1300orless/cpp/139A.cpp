#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[7];
    for (int i=0; i<7; i++) {
        cin >> a[i];
    }

    int res = 0;
    for (int i=0; ; i++) {
        n -= a[i % 7];

        if (n <= 0) {
            res = (i % 7) + 1;
            break;
        }
    }
    cout << res << endl;
    return 0;
}