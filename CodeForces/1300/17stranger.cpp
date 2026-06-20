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
    ll n,m;
    cin>>n>>m;

    vector<ll>a(n);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    vector<ll>b(m);
    for (ll i=0;i<m;i++) {
      cin>>b[i];
    }

    sort(a.begin(),a.end());

    ll idx=-1;
    ll sum=0;
    for (ll i=0,j=n-1;i<n && j>=0;i++,j--) {
      if(b[a[j]-1] >=b[i] && i<m) // i must me less than m to match the index of b
      sum+=b[i];

      else{
        idx= j;
        break;
      }
    }

    if(idx!=-1){
      for (ll i=0;i<=idx;i++) {
      sum+=b[a[i]-1];
      }
    }
    cout<<sum<<endl;
  
  }
  return 0;
}  