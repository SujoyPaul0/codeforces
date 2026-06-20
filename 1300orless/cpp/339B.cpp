#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long res = 0;
    long long prev = 1;

    for (int i = 0; i < m; i++) {
        long long now;
        cin >> now;
        if (now > prev) {
            res += (now - prev);
        } else if ( now == prev ) {
            res += 0;
        } else {
            res += (n - prev) + now;
        }
        prev = now;
    }
    cout << res << endl;
    return 0;
}