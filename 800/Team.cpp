#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int n, count = 0;
  cin >> n; // Read the number of problems

  while (n--) {
    int p, v, t;
    cin >> p >> v >> t; // Read the three integers for each problem
    
    // Check if at least two frieds are sure (sum of the tree integers > = 2)
    if (p + v + t >= 2) {
      count ++;
    }
  }

  cout << count << endl;
  return 0;
}
