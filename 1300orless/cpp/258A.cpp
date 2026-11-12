#include <bits/stdc++.h>
using namespace std;

int main() {
    string binary;
    cin >> binary;

    int index = -1;

    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '0') {
            index = i;
            break;
        }
    }

    if (index == -1) {
        index = binary.length() - 1;
    }

    string binaryChanged;

    for (int i = 0; i < binary.length(); i++) {
        if (i != index) {
            binaryChanged += binary[i];
        }
    }

    cout << binaryChanged << endl;

    return 0;
}