#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int total = a[i][j];

            if (i > 0) total += a[i - 1][j];
            if (i < 2) total += a[i + 1][j];
            if (j > 0) total += a[i][j - 1];
            if (j < 2) total += a[i][j + 1];

            if (total % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}