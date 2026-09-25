#include <bits/stdc++.h>
using namespace std;

int main() {
    int g[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> g[i][j];
        }
    }

    int p[] = {0, 1, 2, 3, 4};

    long long maximum = 0;

    do {
        long long score = 
            g[p[0]][p[1]] + g[p[1]][p[0]]
            + g[p[2]][p[3]] + g[p[3]][p[2]]
            + g[p[1]][p[2]] + g[p[2]][p[1]]
            + g[p[3]][p[4]] + g[p[4]][p[3]]
            + g[p[2]][p[3]] + g[p[3]][p[2]]
            + g[p[3]][p[4]] + g[p[4]][p[3]];

        maximum = max(maximum, score);
    } while (next_permutation(p, p + 5));

    cout << maximum << endl;

    return 0;
}