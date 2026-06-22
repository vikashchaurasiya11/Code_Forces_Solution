#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main() {
  
  int t;
  cin>>t;

  while(t--) {
      int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
  
    vector<int> pref_open(n + 1);
    vector<int> pref_close(n + 1);
  
    for (int i = 0; i < n; i++){ // find the location where diff is minimium
      pref_open[i + 1] = pref_open[i] + (s[i] == '(');
      pref_close[i + 1] = pref_close[i] + (s[i] == ')');
    }
  
    int pos = n;
    for (int i = 0; i < n; i++){
      if (pref_open[i] - pref_close[i] <
        pref_open[pos] - pref_close[pos]){
          pos = i;
      }
    }
  
    string ans(n, '0');
    for (int i = 0; i < pos; i++){
      if (k > 0 && s[i] == '('){
        ans[i] = '1';
        k--;
      }
    }

    for (int i = pos; i < n; i++){
      if (k > 0 && s[i] == ')'){
        ans[i] = '1';
        k--;
      }
    }
  
    cout << ans << '\n';
  }

  return 0;
}