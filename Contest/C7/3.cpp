#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>

using namespace std;

typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s, str1;
    cin >> s >> str1;
    vector<int> cnt1(26, 0);
    for (char c : str1) {
      cnt1[c - 'a']++;
    }
    vector<int> cnt2(26, 0);
    for (char c : s) {
      cnt2[c - 'a']++;
    }
    bool possible = true;
    for (int i = 0; i < 26; i++) {
      if (cnt1[i] < cnt2[i]) {
        possible = false;
        break;
      }
    }
    if (!possible) {
      cout << "Impossible\n";
    }
    else {
      int len = s.length();
      vector<vector<int>> suf(len + 1, vector<int>(26, 0));
      for (int i = len - 1; i >= 0; i--) {
        suf[i] = suf[i + 1];
        suf[i][s[i] - 'a']++;
      }
      string ans = "";
      int s_idx = 0;
      int t_len = str1.length();
      for (int i = 0; i < t_len; i++) {
        for (int c = 0; c < 26; c++) {
          if (cnt1[c] > 0) {
            cnt1[c]--;
            int nid = s_idx;
            if (s_idx < len && (s[s_idx] - 'a') == c) {
              nid++;
            }
            bool flag = true;
            for (int j = 0; j < 26; j++) {
              if (cnt1[j] < suf[nid][j]) {
                flag = false;
                break;
              }
            }
            if (flag) {
              ans += (char)('a' + c);
              s_idx = nid;
              break;
            }
            cnt1[c]++;
          }
        }
      }
      cout << ans <<endl;;
    }
  }
  return 0;
}