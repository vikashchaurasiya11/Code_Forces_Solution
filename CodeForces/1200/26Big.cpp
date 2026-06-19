#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;
const ll mod =1000000000+7;
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		
		int n, k;
		cin >> n >> k;
		
		long long ans = 1;
		
		for (int i = 0; i < k; i++) {
			ans = (ans * n) % mod;
		} 
		cout << ans << endl;
	}

	return 0;
}

