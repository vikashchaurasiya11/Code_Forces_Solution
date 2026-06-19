#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <set>
using namespace std;
typedef long long ll;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<bool> rem(n+1, false);
    ll ans = 0;

    for(int k = 1; k <= n; k++){
      for(int j = k; j <= n; j += k){ // j+=k
        if(s[j-1] == '1') break;
        if(!rem[j]){
          rem[j] = true;
          ans += k;
        }
      }
    }

    cout << ans <<endl;
  }
  return 0;
}