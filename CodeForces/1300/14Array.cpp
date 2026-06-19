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
    vector<ll>bit(32,0);

    for (ll i=0;i<n;i++) {
      cin>>a[i];
    }

    for (ll i=0;i<n;i++) {
      for (ll j=0;j<32;j++) {
        if(a[i]& (1<<j)) bit[j]++;
      }
    }

    
    for (ll i=1;i<=n;i++){
      int flag=0;
      for (ll j=0;j<32;j++){
        if(bit[j]%i!=0){
          flag=1;
          break;
        }
      }
      if(flag==0){
        cout<<i<<" ";
      }
    }
    cout<<endl;

  }
  return 0;
}  