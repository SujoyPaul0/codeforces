#include <bits/stdc++.h>
using namespace std;

double minRadius(vector<int>& line1, vector<int>& line2) {
    int lanCount = line1[0];
    int length = line1[1];

    // Sort lantern positions
    sort(line2.begin(), line2.end());

    // Gap from start of street to first lantern
    double startGap = line2[0] - 0.0;

    // Gap from last lantern to end of street
    double endGap = length - line2[line2.size() - 1];

    // Find maximum gap between consecutive lanterns
    double maxGap = 0.0;
    for (int i = 1; i < line2.size(); i++) {
        double gap = line2[i] - line2[i - 1];
        maxGap = max(maxGap, gap);
    }

    // Required minimum radius
    double radius = max({startGap, endGap, maxGap / 2.0});
    return radius;
}
