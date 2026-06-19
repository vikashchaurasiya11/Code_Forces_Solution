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

    vector<ll> res;

    for (ll i=0;i<n;i++) {
      ll l=1, r=i+1;
      while(l<=r){
        ll m= l +(r-l)/2;

        // 'l' badhega to 'm' badhega aur iterator aur left ki value check karega , l agr right me gaya to r badhega , agr last condition false hoti hai to r ek se kam ho jayega.  

        if(a[i-m+1]>=m) // to get index at middle b/w l and r
        
        {
          l=m+1;
        }

        else r= m-1;
      }

      res.push_back(r);
    }

    for (ll i=0;i<res.size();i++){
      cout<<res[i]<<" ";
    }
    cout<<endl;
    
  }
  return 0;
}  