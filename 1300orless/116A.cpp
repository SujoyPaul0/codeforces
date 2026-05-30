#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, exit, enter;
    int remain = 0;
    int res = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> exit >> enter;
        remain = remain - exit + enter;
        res = max(res, remain);
    }
    cout << res << endl;
    return 0;
}