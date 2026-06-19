#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

const int MOD = 1e9 + 7;

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
      cin >> a[i];
    }

    vector<long long> b(n);
    for (long long i = 0; i < n; i++) {
      cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long ans = 1;

    for (int i = n - 1; i >= 0; i--) {
      int idx = upper_bound(a.begin(), a.end(), b[i]) - a.begin(); // finds the first element in a that is > b[i]. - a.begin() :This converts the iterator into an index (0-based).

      int cnt = n - idx; // total unique elements greater than b[i]

      int used = (n - 1 - i); // no on elemts already used
      int choices = cnt - used; // reamainng elements

      if (choices <= 0) {
        ans = 0;
        break;
      }

      ans = (ans * choices) % MOD;
    }

    cout << ans <<endl;
    
  }
  return 0;
}  