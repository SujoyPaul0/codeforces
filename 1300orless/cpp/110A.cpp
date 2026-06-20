#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int cnt = 0;

    for (char ch : n) {
        if (ch == '4' || ch == '7')
            cnt++;
    }
 
    if (cnt == 4 || cnt == 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}