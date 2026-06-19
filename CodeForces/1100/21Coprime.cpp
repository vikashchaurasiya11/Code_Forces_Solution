#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;

long long gcd (long long a, long long b){
  while (b!=0){
    long long rem= b;
    b=a%b;
    a=rem;
  }
  return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
    int n;
    cin >> n;

    vector<long long>a(n);
    for (long long i=0;i<n;i++) {
      cin>>a[i];
    }

    vector<int> last(1001, -1); // initialize with -1
    
    for (int i = 0; i < n; i++) { // index of each element at its position 
      last[a[i]] = i + 1;
    }

    int ans = -1;

    for (int x = 1; x <= 1000; x++) {
      if (last[x] == -1) continue; // if no value then continue
      for (int y = 1; y <= 1000; y++) {
        if (last[y] == -1) continue; 

        if (gcd(x, y) == 1) { // if no value then continue
          ans = max(ans, last[x] + last[y]); // value of location for that number at given location
        }
      }
    }

    cout << ans << endl;
    
  }
  return 0;
}  