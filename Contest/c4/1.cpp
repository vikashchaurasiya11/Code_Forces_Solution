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
    ll n,c,k;
    cin>>n>>c>>k;

    vector<ll>a(n);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    sort(a.begin(),a.end());

    ll cur=c;
    if(a[0]>cur) cur=c;
    else{

      for (ll i=0;i<n;i++) {
        if(a[i]<=cur){
          ll need=cur-a[i];

          if(need<=k){
            cur+=need;
            k-=need;
          }
          else{
            cur+=k;
            k=0;
          }

          cur+=a[i];
        }
      }
    }

    cout<<cur<<endl;
  }
  return 0;
}  