#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a % 2) {
        cout << -1 << endl;
    } else {
        for (int i = 1; i <= a; i++) {
            if (i % 2) {
                cout << i + 1 << " ";
            } else {
                cout << i - 1 << " ";
            }

        }
    }
    return 0;
}