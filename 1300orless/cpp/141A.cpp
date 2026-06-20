#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string s1, s2, s3;
    for (int i = 0; i < 3; i++) {
        cin >> s1 >> s2 >> s3;
    }
    
    string names = s1 + s2;
    sort(names.begin(), names.end());
    sort(s3.begin(), s3.end());

    if (names == s3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}