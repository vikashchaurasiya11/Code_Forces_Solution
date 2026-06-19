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
    ll n,x,y;
    cin>>n>>x>>y;

    vector<ll>a(n);

    ll base=0;
    ll mx=0;
    for (ll i=0;i<n;i++) {
      cin>>a[i];
      base+= (a[i]/x *y); // maximum transferable amt of all bank 
      mx= max(mx, a[i]-(a[i]/x)*y); // max remaing balance after transer in a bank
      
    }

    
    cout<<base+mx<<endl; // max remainng + max transferable
    
  }
  return 0;
}  