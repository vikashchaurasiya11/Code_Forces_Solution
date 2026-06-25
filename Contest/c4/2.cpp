#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;

    vector<ll>a(n);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    for (ll i=0;i<n-1;i++) {
      ll cnt1=0,cnt2=0;
      for (ll j=i+1;j<n;j++) {
        if(a[i]<a[j]) cnt1++; // only for big
        else if (a[i]>a[j]) cnt2++; // only for small
        else continue; // in case of equal no change.
      }
      cout<<max(cnt1,cnt2)<<" ";
    }

    cout<<0<<endl;
  }
  return 0;
}  