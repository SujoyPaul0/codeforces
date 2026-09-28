#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    int sum = 0;

    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int, int>mp;
    
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }
    
    if (mp[100] % 2 == 0 && mp[200] % 2 == 0) {
        cout << "YES" << endl;
        return 0;
    }

    ll q1 = mp[100];
    ll q2 = mp[200];

    ll baki_200 = q2 % 2;
    ll baki_100 = q1 - (baki_200*2);

    if (baki_100 >= 0 && baki_100 % 2 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;

}