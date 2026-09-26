#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> mp = {
        {1, 0},
        {2, 0},
        {3, 0},
        {4, 0},
        {5, 0},
        {6, 0},
        {7, 0},
    };

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++; 
    }

    if (mp[5] > 0 || mp[7] > 0) {
        cout << -1 << endl;
        return 0;
    }

    int count = mp[4];
    int four = count;
    if (mp[1] < count || mp[2] < count) {
        cout << -1 << endl;
        return 0;
    } else {
        mp[1] -= count;
        mp[2] -= count;
        mp[4] -= count;
    }


    count = mp[3];
    int three = count;
    if (mp[1] < count || mp[6] < count) {
        cout << -1 << endl;;
        return 0;
    } else {
        mp[1] -= count;
        mp[3] -= count;
        mp[6] -= count;
    }

    count = mp[2];
    int two = count;
    if (mp[1] < count || mp[6] < count) {
        cout << -1 << endl;
        return 0;
    } else {
        mp[1] -= count;
        mp[2] -= count;
        mp[6] -= count;
    }

    

    if (mp[1] != 0 || mp[2] != 0 ||
        mp[3] != 0 || mp[4] != 0 || mp[6] != 0) {
            cout << -1 << endl;
            return 0;
        }

    for (int i = 0; i < four; i++) {
        cout << "1 2 4\n";
    }

    for (int i = 0; i < three; i++) {
        cout << "1 3 6\n";
    }

    for (int i = 0; i < two; i++) {
        cout << "1 2 6\n";
    }

    return 0;
}