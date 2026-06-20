#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    set<int>digits;

    for (int i = k; i <= d; i+=k) {
        digits.insert(i);
    }
    for (int i = l; i <= d; i+=l) {
        digits.insert(i);
    }
    for (int i = m; i <= d; i+=m) {
        digits.insert(i);
    }
    for (int i = n; i <= d; i+=n) {
        digits.insert(i);
    }

    cout << digits.size() << endl;
    return 0;

}