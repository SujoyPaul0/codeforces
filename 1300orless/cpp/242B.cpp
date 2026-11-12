#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<array<int, 2>> intervals;

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        mini = min(mini, a);
        maxi = max(maxi, b);

        intervals.push_back({a, b});
    }

    for (int i = 0; i < n; i++) {
        if (intervals[i][0] == mini &&
            intervals[i][1] == maxi) {

            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}