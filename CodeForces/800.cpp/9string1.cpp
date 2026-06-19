#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int c = 0;
        int flag = 0;

        while (x.length() < m) {
            x = x + x;
            c++;
        }
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i + m <= x.length(); i++) {
                if (x.substr(i, m) == s) {
                    flag = 1;
                    break;
                }
            }
            if (flag) break;
            x = x + x;
            c++;
        }
        if (flag) cout << c << endl;
        else cout << -1 << endl;
    }
}
