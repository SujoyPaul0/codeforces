#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int>a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int low = a[0];
    int high = a[0];
    int cnt = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > high) {
            high = a[i];
            cnt++;
        }
        else if (a[i] < low) {
            low = a[i];
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}