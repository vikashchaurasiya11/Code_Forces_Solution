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
  
      vector<ll>b;
      b.push_back(a[0]);
      for (ll i=1;i<n-1;i++) {

        if( (a[i]>a[i-1] && a[i]>a[i+1]) || (a[i]<a[i-1] && a[i]<a[i+1])) {
          b.push_back(a[i]);
        }
      }

      b.push_back(a[n-1]);

      cout<<b.size()<<endl;
      for(ll i=0;i<b.size();i++){
        cout<<b[i]<<" ";
      }
      cout<<endl;
    }

  
  return 0;
}  