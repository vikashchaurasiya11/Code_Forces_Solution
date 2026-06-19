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
    string s;
    cin>>s;
    long long n= s.size();
    s=s+s;
    long long p=s.size();

    long long i=0;
    long long mxi=0;
    while(i<p) {
      long long mx=0;
      if(i<p && s[i]=='0') {
        i++;
      }
      else{
        long long j=i;
        while(j<p && s[j]=='1'){
          mx++;
          j++;
        }
        mxi= max(mxi,mx);
        i=j;
      }
    }

    if(mxi==p) cout<<n*n<<endl;
    else{
      cout<<((mxi+1)/2) *( (mxi+2)/2 )<<endl;
    }
  }
  return 0;
}  



// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;
// typedef long long ll;
// int main() {
// 	int t = 1;
// 	cin >> t; 
// 	while (t--) {
		
//     string s;
//     cin >> s; 
//     ll n = s.size(); 
//     int maxi = 0;
//     int i = 0;

//     while (i < n) { 
//       if (s[i] == '0') { 
//         i++;
//         continue;
//       }
//       int j = i + 1;
//       while (j < n && s[j] == '1') { 
//         j++;
//       }
//       maxi = max(maxi, j - i); 
//       i=j;
//     }

//     if (maxi == n) {
//       cout << n * n << endl;
//     }
//     else{
//       if (s[0] == '1' && s[n - 1] == '1') {
//         int i = 0;
//         int cnt = 0;
//         while (i < n && s[i] == '1') { 
//           i++;
//           cnt++;
//         }
//         int j = n - 1;
//         while (j > i && s[j] == '1') { 
//           j--;
//           cnt++;
//         }
//         maxi = max(maxi, cnt); 
//       }
    

//       maxi++; 
//       ll temp = (maxi + 1) / 2; 
//       cout << (temp) * (maxi / 2) << endl; 
//     }
// 	}
// }

