#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	long long a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	
	if (k >= 3) {
		cout << 0 << '\n';
		return;
	}

	vector<long long> dif; 
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			dif.push_back(abs(a[i] - a[j]));
		}
	}

	
	sort(dif.begin(), dif.end()); 

	long long ans = LLONG_MAX;

	
	for (int i = 0; i < n; i++) {
		ans = min(ans, a[i]);
	}

	
	ans = min(ans, dif[0]);

	if (k == 2) {
		
		for (int i = 0; i < n; i++) {
			auto it = lower_bound(dif.begin(), dif.end(), a[i]); 
			if (it != dif.end()) {
				ans = min(ans, abs(*it - a[i]));
			}
			if (it != dif.begin()) {
				--it; 
				ans = min(ans, abs(*it - a[i]));
			}
		}
	}

	cout << ans <<endl;
}

int main() {
	cin.tie(0);
	cin.sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}

