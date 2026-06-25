#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), c(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        set<int> s;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x); // no repetion in que, so no number gets removed
        }

        bool y = true;
        for (int i = 0; i < n; ++i) {
            auto it = s.lower_bound(a[i]); // first ele which >= a[i] in the set
            if (it == s.end()) { // if such elements no found in the set
                y = false;
                break;
            }
            c[i] = *it; // store that value in c[i]
            s.erase(it); // erase after using it.
        }
        if (!y) {
            cout << -1 << '\n'; // not found then false
            continue;
        }
        int ans = 0;
        for (int i = 0; i < n; ++i) { // inversion formula
            for (int j = i + 1; j < n; ++j) { // i<j nut c[i]>c[j] ans ++;
                if (c[i] > c[j]) {
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


// hamne b wale array kko a ke according sort kar liya using set. as per question i<j then b[i]<b[j], so after soting we check , if there is any i and j where i <j and b[i]>b[j] so we increase the ans by 1.