#include <bits/stdc++.h>
#include <set>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char>st;
    
    for (char c : s) {
        st.insert(c);
    }
    int y = st.size();
    if (y % 2) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;

}