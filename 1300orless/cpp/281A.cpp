#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int asciiValue = static_cast<int>(s[0]);
    if (asciiValue >= 97 && asciiValue <= 122) {
       s[0] = toupper(s[0]);
    }

    cout << s << endl;
    return 0;
}