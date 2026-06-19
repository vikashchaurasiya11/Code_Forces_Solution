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
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    for (ll i=0;i<n-1;i++) {
      for (ll j=i+1;j<n;j++) {
        if(a[j]>a[i]) {
          a[j]=a[i];
          break;
        }
      }
    }

    ll sum=0;
    for (ll i=0;i<n;i++) {
      sum+=a[i];
    }

    cout<<sum<<endl;
    
  }
  return 0;
}  