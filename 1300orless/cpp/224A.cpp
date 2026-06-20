#include <bits/stdc++.h>
using namespace std;

int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    long long a = sqrt(1LL*s1*s3/s2);
    long long b = sqrt(1LL*s1*s2/s3);
    long long c = sqrt(1LL*s2*s3/s1);

    long long res = 4*(a + b + c);
    cout << res << endl;
}