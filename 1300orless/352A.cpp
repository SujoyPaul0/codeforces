#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int zeros = 0;
    int fives = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 0)
            zeros++;
        else
            fives++;
    }

    if (zeros == 0) {
        cout << -1 << endl;
        return 0;
    }

    int useFives = (fives / 9) * 9;

    if (useFives == 0) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < useFives; i++)
        cout << '5';

    for (int i = 0; i < zeros; i++) 
        cout << '0';

    cout << endl;
    return 0;
}