// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// #include <iostream>
// using namespace std;
// #define ll long long
// int main()
// {
// 	ll t;
// 	cin >> t; 
// 	while (t--) {
// 		ll n;
// 		cin >> n; 
// 		ll a[n];
// 		ll b[n];
		
// 		for (int i = 0; i < n; i++) {
// 			cin >> a[i];
// 		}
		
// 		for (int i = 0; i < n; i++) {
// 			cin >> b[i];
// 		}

// 		int li = -1, ri= -1;

// 		for (int i = 0; i < n; i++) {
// 			if (a[i] != b[i]) { // jab continuosla do same na ho tab wale le lenge baaki ka juske baad check kar lenge iteration se
// 				if (li == -1) li = i; 
//         else {
// 					ri = i; 
// 					break;
// 				}
// 			}
// 		}

		
// 		int i = li - 1; // for checkin element in b jo last li se piche jaane me consecutive chhote ho
// 		while (i >= 0) {
// 			if (b[i] <= b[i + 1]) {
// 				i--;
// 			} 
//       else break;
// 		}
// 		li = i + 1; // because last iteration was wrong
		
// 		if (ri == -1) ri = n - 1;
		
// 		int j = ri + 1;  // for checkin element jo b me previous se bade ho
// 		while (j < n) {
// 			if (b[j] >= b[j - 1]) j++;
//       else break;
// 		}
// 		ri = j - 1; // because last iteration was wrong
		
// 		cout << li + 1 << " " << ri + 1 << endl; // to balance the index
// 	}
//   return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
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

   long long l= -1,r= -1;

    for (long long i=0;i<n;i++){ 
      if(b[i]!=a[i]){ 
        if(l==-1){ // to  get left
          l=i;
        }
        else { // to get right 
          r=i;
          break;
        }
      }
    }

    long long i=l-1;
    while(i>=0){ // to checak previous elements in a which are same or less a[i+1]
      if(b[i]<=b[i+1]){
        i--;
      }
      else break;
    }
    l=i+1; // update left 

    if(r==-1){
      r=n-1;
    }

    long long j=r+1;
    while(j<n){
      if(b[j]>=b[j-1]){
        j++;
      }
      else break;
    }
    r=j-1; // final ek jada ho jayega iteration ki wajah se
    
    cout<<l+1<<" "<<r+1<<endl;
  }
  return 0;
}  