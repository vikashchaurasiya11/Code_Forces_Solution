#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;

    vector<ll>a(n);
    ll sum=0;
    for (ll i=0;i<n;i++) {
      cin>>a[i];
      sum+=a[i];
    }

    ll mx=INT_MIN;
    ll cur=0;
    for (ll i=0;i<n-1;i++) {
      cur= max(cur+a[i],a[i]); // a[i] bcz current me updated waha tak ke sum ki value rakhenge(if a[i]<0 then current sum upto that will get store and mx will not get affetcted as it will store the previous max upto trhat number)
      mx=max(mx,cur);
    }

    ll mx1=INT_MIN;
    ll cur1=0;
    for (ll i=1;i<n;i++) {
      cur1= max(cur1+a[i],a[i]);// agr kisi bhi ek sequence tak value negative aayegi to uske aage ka jo sabse max element hoga waha se counter start hoga.
      mx1=max(mx1,cur1);
    }

   cout << (sum > max(mx1, mx) ? "YES" : "NO") << endl;
    
  }
  return 0;
}  


// -3 -4 3 4 -2
// max(cur+a[i],a[i])
// max(-3,-3) = cur=-3
// max(-7,-4) = cur=-4
// max(-1,3) = 3
// max(7,4) = 7
// max(5,-2) cur=5;
// ek max me ye sab counter ki value store karenge = final ans= 7
//  kisi bhi seq ki sabse badi value yaha store ho jaygei

