#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int h = 1000;
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; i++) {
        int diff = abs(a[i] - a[(i + 1) % n]);
        if (diff < h) {
            x = i;
            y = (i+1) % n;
            h = diff;
        }
}

    cout << x + 1 << " " << y + 1 << endl;
    return 0;
}