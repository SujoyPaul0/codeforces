#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<char, int>mp1;
    unordered_map<char, int>mp2;

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != ' ') {
            if (mp1.count(s1[i]) == 0) {
                mp1[s1[i]] = 1;
            } else {
                mp1[s1[i]]++;
            }
        }
    }

    for (int i = 0; i < s2.length(); i++) { 
        if (s2[i] != ' ') {
            if (mp2.count(s2[i]) == 0) {
                mp2[s2[i]] = 1;
            } else {
                mp2[s2[i]]++;
            }
        }
    }

    bool same = true;
    for (auto &p : mp2) {
        if (mp1.count(p.first) == 0 || p.second > mp1[p.first]) {
            same = false;
        }
    }

    if (!same) {
        cout << "NO" << endl;
        return 0;
    } else {
        cout << "YES" << endl;
        return 0;
    }
}




