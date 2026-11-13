#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> mp;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        mp[x]++;
    }

    int maxFreq = 0;
    
    for (auto it : mp) {
        maxFreq = max(maxFreq, it.second);
    }

    cout << (maxFreq <= (n + 1) / 2 ? "YES" : "NO");

    return 0;

}

