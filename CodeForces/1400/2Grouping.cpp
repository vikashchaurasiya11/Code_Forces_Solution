#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int ans = 0; 
	int x = INT_MAX, y = INT_MAX; 

	for (int i = 0; i < n; i++) {
		if (x > y) { // swap so that it reverse both the value and start from 1st case again.
			swap(x, y);
		}
		
		if (a[i] <= x) {
			x = a[i];
		} else if (a[i] <= y) {
			y = a[i]; 
		} else {
			x = a[i];
			ans++;
		}
	}

	cout << ans << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}

