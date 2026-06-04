#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<pair<int, int>> points;

    for (int i = 0; i < n; i++) {
        int p1, p2;
        cin >> p1 >> p2;
        points.insert({p1, p2});
    }
    
    int res = 0;
    for (auto p : points) {
        bool l=false, r=false, u=false, d=false;
        int x = p.first;
        int y = p.second;
        for (auto q : points) {
            if (q.first>x && q.second==y){
                r=true;
            } else if (q.first<x && q.second==y) {
                l=true;
            } else if (q.first==x && q.second<y) {
                d=true;
            } else if (q.first==x && q.second>y) {
                u=true;
            }
            
        }

        if (l && r && u && d) {
                res++;
            }
    }
    cout << res << endl;
    return 0;
}