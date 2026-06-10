#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> freq;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        if (freq.count(s)) {
            freq[s]++;
        } else {
            freq[s] = 1;
        }
        
    }

    string bestKey;
    int maxVal = INT_MIN;

    for (auto p : freq) {
        if (p.second > maxVal) {
            maxVal = p.second;
            bestKey = p.first;
        }
    }

    cout << bestKey << endl;
    return 0;
}