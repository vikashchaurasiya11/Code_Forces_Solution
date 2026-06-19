#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int rem = a % b;
    a = b;
    b = rem;
  }
  return a;
}

int main() {
	int t;
	
	cin >> t;
	while (t--) {
		int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    
    int ans = 0;
    for (int i = 0; i < n; ++i) {
      ans = gcd(ans, abs(a[i] - a[n - i - 1]));
    }
    
    cout << ans << endl;
	}
}
