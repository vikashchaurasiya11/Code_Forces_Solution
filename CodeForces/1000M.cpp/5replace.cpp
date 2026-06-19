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
    ll n,q;
    cin>>n>>q;

    vector<ll>a(n);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    vector<ll>b(n);
    for (ll i=0;i<n;i++) {
      cin>>b[i];
    }

    vector<vector<ll>>c(q,vector<ll>(2));;
    for (ll i=0;i<q;i++){
      for (ll j=0;j<2;j++){
        cin>>c[i][j];
      }
    }

    for (ll i=0;i<n;i++) {
      if(a[i]<b[i]) a[i]=b[i];
    }

    int idx=n-1;
    for (ll i=n-2;i>=0;i--) {
      if(a[i]<a[idx]){
        a[i]=a[idx];
      }
      else idx=i;
    }

    vector<ll>ps(n+1); // prefix sum
    ps[0]=0; // subtract karne me aasani hogi
    ps[1]=a[0];
    for (ll i=2;i<=n;i++) {
      ps[i]=a[i-1]+ps[i-1];
    }

    // vector<ll>ss(n); // suffix sum
    // ss[n-1]=a[n-1];
    // for (ll i=n-2;i>=0;i--) {
    //   ss[i]=a[i]+ss[i+1];
    // }


    for (ll i=0;i<q;i++){
      int sum= ps[c[i][1]]-ps[c[i][0]-1];
      cout<<sum<<" ";
    }
    cout<<endl;

  }
  return 0;
}  