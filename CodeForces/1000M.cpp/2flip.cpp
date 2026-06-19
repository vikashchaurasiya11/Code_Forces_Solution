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
    ll n,k;
    cin>>n>>k;

    vector<ll>a(n);
    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }
    vector<ll>b(k);
    for (ll i=0;i<k;i++) {
      cin>>b[i];
    }

    ll d=a[b[0]-1]; // wo value jo suru me di hai

    int idxs=-1,idxe=-1;
    for(ll i=0;i<n;i++){
      if(a[i]!=d){
        idxs=i;
        break;
      }
    }

    for(ll i=n-1;i>=0;i--){
      if(a[i]!=d){
        idxe=i;
        break;
      }
    }

    int cnt1=1;
    for(ll i=idxs+1;i<b[0];i++){
      if(a[i]!=a[i-1]) cnt1++;
    }

    int cnt2=1;

    for(ll i=idxe;i>b[0]-1;i--){
      if(a[i]!=a[i-1]) cnt2++;
    }

    if(idxe==-1 && idxs==-1) cout<<0<<endl;
    else cout<<max(cnt1,cnt2)<<endl;

  }
  return 0;
}  