#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
      int n;
      cin >> n;

      vector<long long> v(n);
      for(int i = 0; i < n; i++) 
      cin >> v[i];

      long long cur = v[0];
      long long ans = v[0];

      for(int i = 1; i < n; i++){
        if(abs(v[i]) % 2 != abs(v[i-1]) % 2){
          cur = max(v[i], cur + v[i]); // jab tak sum ki value jada hogi use lange
          // jab sum se jada elementki value ho jayegi tab us element se count karna start kar dnege
        }
        else{
          cur = v[i]; // ab wapas waha se suru kar denge
        }

        ans = max(ans, cur); // max ko updete karte rahenge
      }

      cout << ans << endl;
    }
}