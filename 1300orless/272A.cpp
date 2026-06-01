#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    int sum = 0;
    int ways = 0;

    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
    }
    for (int i = 1; i <= 5; i++) {
        if ((sum + i) % (n+1) != 1) {
            ways += 1;
        }
    }

    cout << ways << endl;
    return 0;
}