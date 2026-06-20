#include <bits/stdc++.h>
using namespace std;

int main() {
    int matrix[5][5];
    int posR, posC;
    int res;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                posR = i + 1; 
                posC = j + 1;
            }
        }
    }

    res = abs(3 - posR) + abs(3 - posC);
    cout << res << endl;
    return 0;
}