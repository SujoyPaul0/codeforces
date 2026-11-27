#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str;
    cin >> str;

    vector<int> first_half(n);
    vector<int> second_half(n);

    for (int i = 0; i < n; i++) {
        first_half[i] = str[i] - '0';
        second_half[i] = str[i + n] - '0';
    }

    sort(first_half.begin(), first_half.end());
    sort(second_half.begin(), second_half.end());

    bool greater = true;
    bool less = true;
    for (int i = 0; i < n; i++) {
        if (first_half[i] < second_half[i]) {
            greater = false;
        } else if (first_half[i] == second_half[i]){
            cout << "NO" << endl;
            return 0;
        } else {
            less = false;
        }
    }

    if (greater || less) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}