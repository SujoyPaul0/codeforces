#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool res = false;

    for (char c : s) {
        if (c=='H' || c=='Q' || c=='9')
        {
            res = true;
            break;
        }
    }

    if (res)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}