#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    long long n, c;
    cin >> n >> c;

    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
      cin >> v[i];
    }

    __int128 sum = 0;
    __int128 sumSq = 0;

    for (long long i = 0; i < n; i++) {
      sum += v[i];
      sumSq += (__int128)v[i] * v[i];
    }

    __int128 a = n;
    __int128 b = 2 * sum;
    __int128 d = sumSq - c;

    long double D = (long double)b * (long double)b
      - 4.0L * (long double)a * (long double)d;

    long double x = (- (long double)b + sqrtl(D)) / (2.0L * (long double)a);

    long long ans = (long long)(x / 2.0L);

    cout << ans << '\n';
  }
 
  return 0;
}



// second method:-


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// #include <cmath>
// using namespace std;
// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//     long long n,c;
//     cin>>n>>c;

// 		vector<long long> v(n);
//     for (long long i = 0; i < n; i++) {
//       cin >> v[i];
//     }
    
//     long long si=0,ei=1e9;
    
// 		long long ans=0;
//     while(si<=ei){
//       long long mid= si + (ei -si)/2; // mid= w
// 			long long sum =0;
// 			for(int i=0;i<n;i++) {
// 				sum+= (v[i] + 2* mid) *(v[i] + 2* mid); // to store sum of square adding w
			
// 				if(sum>c) break; // out of for loop
// 			}
 
// 			if(sum<=c){ // update w in ans
// 				ans=mid;
// 				si=mid+1; // in case of less update ei
// 			}
// 			else {
// 				ei=mid-1;
// 			}
//     }

// 		cout<<ans<<endl;
   
//   }
//   return 0;
// }  