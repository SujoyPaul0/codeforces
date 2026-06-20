#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mini = *min_element(a.begin(), a.end());
    int count = 0;
    int idx = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == mini) {
            count++;
            idx = i;
        }
    }

    if (count > 1) {
        cout << "Still Rozdil" << endl;
    } else {
        cout << idx + 1 << endl;
    }
    return 0;

}