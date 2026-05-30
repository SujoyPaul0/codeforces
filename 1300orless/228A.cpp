#include <bits/stdc++.h>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> s;
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);

    int size = s.size();
    int res = 4 - size;
    cout << res << endl;
    return 0;
}