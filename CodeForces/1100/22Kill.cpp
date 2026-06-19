#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;
const ll mod= 1e9 +7;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;

   ll ans = ((((n * (n + 1)) % mod) * (4 * n - 1)) % mod * 337) % mod;

    cout<<ans<<endl;
  }
  return 0;
}  