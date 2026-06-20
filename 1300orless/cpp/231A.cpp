#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0;

    for (int i = 0; i < n; i++) {
        int v1, v2, v3;
        int total = 0;
        cin >> v1 >> v2 >> v3;
        total = v1 + v2 + v3;
        
        if (total >= 2) {
            res += 1;
        }
    }
    cout << res << endl;
    return 0;
}