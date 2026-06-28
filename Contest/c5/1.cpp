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
    ll cnt1=0,cnt2=0,cnt3=0;
    for (ll i=0;i<n;i++) {
      cin>>a[i];
      if(a[i]==0) cnt1++;
      else if(a[i]==1) cnt2++;
      else cnt3++;
    }
    ll r= min(cnt2,cnt3);
    cnt2-=r;
    cnt3-=r;
    ll s=  cnt3/3;
    ll t= cnt2/3;

    cout<<(cnt1+r+s+t)<<endl;

  }
  return 0;
}  