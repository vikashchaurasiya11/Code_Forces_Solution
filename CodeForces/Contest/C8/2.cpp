#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>

// ll gcd(ll a, ll b){
//   while(b>0){
//     ll temp= a%b;
//     a=b;
//     b=temp;
//   }
//   return a;
// }

// ll lcm(ll a, ll b){
//   return (a*b)/(gcd(a,b));
// }

using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;

    ll cnt=0;

    for (ll i=1;i<=n;i++) {
      cnt+=((n/i)*(n/i)); // (jitne bhi divisor honge ek number ke unka square)
    }

    cout<<cnt<<endl;
  }
  return 0;
}  