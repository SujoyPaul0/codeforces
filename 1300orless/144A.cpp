#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    int maxi = -1;
    int mini = 101;

    int maxidx = 0;
    int minidx = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] > maxi) {
            maxi = a[i];
            maxidx = i;
        }

        if (a[i] <= mini) {
            mini = a[i];
            minidx = i;
        }
    }

    int res = maxidx + (n - 1 - minidx);
    if (maxidx > minidx) {
        res--;
    }

    cout << res << endl;

    return 0;
}