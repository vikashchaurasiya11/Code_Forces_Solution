#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int i = 0, j = n - 1;
        int ans = 0;
        while (i < j) {
            if (a[i] <= h && a[j] <= l) {
                ans++;
                i++;
                j--;
            } else if (a[j] > l) {
                j--;
            } else {
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
