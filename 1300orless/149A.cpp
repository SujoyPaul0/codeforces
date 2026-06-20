#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int>a(12);
    for (int i = 0; i < 12; i++) {
        cin >> a[i];
    }
    
    int sum = accumulate(a.begin(), a.end(), 0);
    
    if (sum < n) {
        cout << -1 << endl;
        return 0;
    }

    sort(a.begin(), a.end());

    int i = 11;
    int count = 0;

    while (n > 0 && i >= 0) {
        n -= a[i];
        count++;
        i--;
    }

    cout << count << endl;
    return 0;

    
}