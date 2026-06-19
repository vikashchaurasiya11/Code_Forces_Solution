#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
	int t = 1; 
	cin >> t; 

	while (t--) { 
		int n, k;
		cin >> n >> k; 

		vector<int> a(n), b(n);
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}

		int maxB = 0; 
		int sum = 0;
		int ans = 0; 
		
		for (int i = 0; i < min(n, k); i++) { // jo min hoga waha tak loop chalega
			sum += a[i];  // sum me sab store karenge
			maxB = max(maxB, b[i]); 
			ans = max(ans, sum + (k - (i + 1)) * maxB); 
		}

		cout << ans << endl; 
	}
}
