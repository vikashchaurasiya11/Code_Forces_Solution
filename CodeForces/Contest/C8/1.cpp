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
    ll n,c;
    cin>>n>>c;

    vector<ll>a(n);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    vector<ll>b(n);
    for (ll i=0;i<n;i++) {
      cin>>b[i];
    }

    ll cnt1=0;
    ll cnt2=0;
    bool flag=0;
    for (ll i=0;i<n;i++) {
      if(a[i]>=b[i]) cnt1+=(a[i]-b[i]);
      else {
        flag=1;
        break;
      }
    }

    ll f=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for (ll i=0;i<n;i++) {
      if(a[i]<b[i]){
        f=1;
        break;
      }
    }

    if(f==0){
      for (ll i=0;i<n;i++){
        cnt2= cnt2+(a[i]-b[i]);
      }
      cnt2+=c;
    }

    if(f==1) cout<<-1<<endl;
    else if(flag==0) cout<<cnt1<<endl;
    else cout<<cnt2<<endl;

    
  }
  return 0;
}  