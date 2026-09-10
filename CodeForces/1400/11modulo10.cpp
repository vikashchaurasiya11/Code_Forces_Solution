#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>
using namespace std;

void solve() {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
      cin >> a[i];
		}

		for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 1) {
        a[i] += a[i] % 10; 
      }
		}

		if (count(a, a + n, a[0]) == n) { 
      cout << "YES\n";
      return;
		}

		for (int i = 0; i < n; i++) {
      if (a[i] % 10 == 0) { 
        cout << "NO\n";
        return;
      }
		}

		for (int i = 0; i < n; i++) { //2 4 8 6 2 = total add= 20 =2+4+8+6
      while (a[i] % 10 != 2) {  // jab tak last digit 2 na ho tab tak add karenge.
        a[i] += a[i] % 10;
      }
      a[i] %= 20;  // total add jitna karenge uska modulo, 
		}

		if (count(a, a + n, a[0]) == n) { // same no. ki freq count kar lega
      cout << "YES\n";
      return;
		}
    else {
      cout << "NO\n";
		}
}
int main() {
		cin.sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		int t;
		cin >> t;

		while (t--) { 
      solve();
		}
}

