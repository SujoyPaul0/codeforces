#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    double sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    double res = sum / n;
    cout << res << endl;
    return 0;

}