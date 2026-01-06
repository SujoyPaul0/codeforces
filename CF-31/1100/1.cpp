#include <bits/stdc++.h> 
// Includes all standard C++ libraries (commonly used in competitive programming)

using namespace std; 
// Allows use of standard library names without prefixing with std::

typedef long long ll; 
// Defines ll as an alias for long long (64-bit integer)

int main() {

#ifndef ONLINE_JUDGE
	// If not running on an online judge (i.e., running locally)
	freopen("Error.txt", "w", stderr);
	// Redirects error output (stderr) to Error.txt for debugging
#endif

	int t = 1; 
	// Number of test cases (initialized to 1 by default)

	cin >> t; 
	// Reads the actual number of test cases from input

	while (t--) { 
		// Loop over all test cases

		int n; 
		// Stores the length of the string

		cin >> n; 
		// Reads the length of the string

		string s; 
		// Declares the string variable

		cin >> s; 
		// Reads the string

		// Map to store the frequency of each character encountered so far
		map<char, int> freq;

		int count = 0; 
		// Keeps track of how many distinct characters have appeared so far

		// Vector to store the number of distinct characters up to each index
		vector<int> distinct(n, 0);

		// Iterate through the string character by character
		for (int i = 0; i < n; i++) { 
			// O(n log n) because map operations take log n time

			freq[s[i]]++; 
			// Increase frequency of the current character

			if (freq[s[i]] == 1) { 
				// If this character appears for the first time
				count++; 
				// Increment the distinct character count
			}

			distinct[i] = count; 
			// Store the number of distinct characters seen up to index i
		}

		ll ans = 0; 
		// Variable to store the final answer (uses long long to avoid overflow)

		// Sum the number of distinct characters for all prefixes
		for (int i = 0; i < n; i++) { 
			// O(n) loop
			ans += distinct[i]; 
			// Add distinct count at position i to the answer
		}

		cout << ans << endl; 
		// Print the result for the current test case
	}
}
