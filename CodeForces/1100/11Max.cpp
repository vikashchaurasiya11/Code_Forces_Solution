#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    // prefix sum
    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
      pref[i + 1] = pref[i] + a[i];
    }

    long long ans = 0;

    for (int x = 0; x <= k; x++) { //sliding window . k=1 TIMES ITERATE to perform all possibility 
      int left = 2 * x;   // increase min value
      int right = n - (k - x); 

      if (left <= right) {
        long long sum = pref[right] - pref[left];
        ans = max(ans, sum); // update ans
      }
    }

    cout << ans << endl;
  }
}