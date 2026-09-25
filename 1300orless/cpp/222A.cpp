#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a;
    int last = 0;
    int continuous = 1;

    for (int i = 0; i < n; i++) {
        cin >> a;

        if (a == last) {
            continuous++;
        } else {
            continuous = 1;
        }

        last = a;
    }

    if (continuous + k > n) {
        cout << n - continuous << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}