#include <bits/stdc++.h>
#include <string>
using namespace std;

bool hasDistinctDigits(int year) {
    string s = to_string(year);

    set<char> digits;
    
    for (char ch : s) {
        digits.insert(ch);
    }

    return digits.size() == s.length();
}

int main() {
    int y;
    cin >> y;

    y++;

    while (!hasDistinctDigits(y)) {
        y++;
    }
    cout << y << endl;
    return 0;
}