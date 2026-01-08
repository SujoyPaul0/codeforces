#include <bits/stdc++.h>          // Includes all standard C++ libraries
using namespace std;              // Allows usage of standard library names without std::
typedef long long ll;             // Creates an alias ll for long long (64-bit integer)

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);  // Redirects error output to Error.txt (for local debugging)
#endif

	int t = 1;                     // Variable to store number of test cases
	cin >> t;                      // Reads number of test cases

	while (t--) {                  // Loop over each test case
		ll n;                       // Stores the size of the array
		cin >> n;                   // Reads array size
		
		ll a;                       // Temporary variable to read each array element
		
		// Vector storing (value, original_index) pairs
		vector<pair<ll, ll>> v;

		// Read array elements and store them with their original indices
		for (int i = 0; i < n; i++) { // Loop runs n times → O(n)
			cin >> a;                 // Read element
			v.push_back({a, i});     // Store element with its index
		}

		vector<ll> pre(n);          // Prefix sum array of sorted values
		
		// Sort vector by array values (pair.first)
		sort(v.begin(), v.end());   // Sorting takes O(n log n)

		// Initialize first prefix sum
		pre[0] = v[0].first;

		// Compute prefix sums of sorted array
		for (int i = 1; i < n; i++) { // O(n)
			pre[i] = pre[i - 1] + v[i].first;
		}

		vector<ll> ans(n);          // Stores final answer for each original index

		// For each element, calculate how many elements can be removed
		for (int i = 0; i < n; i++) { // Outer loop → O(n)
			int j = i;               // Pointer to current position
			int found = i;           // Count of removable elements starting from i

			// Try to extend removals using prefix sum logic
			while (j < n) {
				// Create a pair with (current sum + 1)
				// INT_MIN ensures lower_bound only compares first element
				pair<ll, ll> temp = {pre[j] + 1, INT_MIN};

				// Find largest index where v[idx].first <= pre[j]
				ll idx = lower_bound(v.begin(), v.end(), temp) - v.begin();
				idx--;                // Move to valid index

				// If no progress is possible, break
				if (idx == j) {
					break;
				}

				// Count how many new elements can be included
				found += idx - j;

				// Move pointer forward
				j = idx;
			}

			// Store answer in original index position
			ans[v[i].second] = found;
		}

		// Output the result for the current test case
		for (int i = 0; i < n; i++) { // O(n)
			cout << ans[i] << " ";    // Print answer
		}
		cout << endl;                // Newline after each test case
	}

	// Time Complexity: O(n log n) due to sorting and binary search
	// Space Complexity: O(n) for vectors
}
